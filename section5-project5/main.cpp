#include <iostream>
#include <array>

using namespace std;

const int ROWS = 3;
const int COLS = 3;
const array<string, 2> playerSymbols{"X", "O"};

void runGame();

void initializeGameBoard(string [ROWS][COLS]);

void printGameBoard(string [ROWS][COLS]);

void getPlayerMove(const string &, string [ROWS][COLS]);

bool isCellOccupied(int, int, string [ROWS][COLS]);

bool isBoardFull(string [ROWS][COLS]);

string checkForWin(string [ROWS][COLS]);

bool checkPlayerWin(const string &, string [ROWS][COLS]);

int main() {
    string player1 = "X";
    string player2 = "O";
    cout << boolalpha;

    runGame();
    return 0;
}

void initializeGameBoard(string gameBoard[ROWS][COLS]) {
    for (int row{0}; row < ROWS; row++) {
        for (int col{0}; col < COLS; col++) {
            gameBoard[row][col] = "[ ]";
        }
    }
}

void printGameBoard(string gameBoard[ROWS][COLS]) {
    for (int header{0}; header <= COLS; header++) {
        if (header == 0) {
            cout << "   ";
        } else {
            cout << header << "   ";
        }
    }
    cout << endl;
    for (int row{0}; row < ROWS; row++) {
        cout << row + 1 << " ";
        for (int col{0}; col < COLS; col++) {
            if (gameBoard[row][col] == "[ ]") {
                cout << gameBoard[row][col] << " ";
            } else {
                cout << "[" << gameBoard[row][col] << "]" << " ";
            }
        }
        cout << endl;
    }
}

void getPlayerMove(const string &playerSymbol, string gameBoard[ROWS][COLS]) {
    bool validEntry{false};

    int tmpRow{0};
    int tmpCol{0};

    while (!validEntry) {
        cout << "Enter a row number (1-3): ";
        cin >> tmpRow;
        cout << endl << "Enter a column number (1-3): ";
        cin >> tmpCol;

        tmpRow--;
        tmpCol--;

        if (isCellOccupied(tmpRow, tmpCol, gameBoard)) {
            cout << "Cell already taken! Try again.." << endl;
        } else {
            validEntry = true;
            gameBoard[tmpRow][tmpCol] = playerSymbol;
            cout << "Move entered!" << endl;
        }
    }
}


bool isCellOccupied(int row, int col, string gameBoard[ROWS][COLS]) {
    if (gameBoard[row][col] != "[ ]") {
        return true;
    }
    return false;
}

bool isBoardFull(string gameBoard[ROWS][COLS]) {
    for (int row{0}; row < ROWS; row++) {
        for (int col{0}; col < COLS; col++) {
            if (gameBoard[row][col] == "[ ]") {
                return false;
            }
        }
    }
    return true;
}


string checkForWin(string gameBoard[ROWS][COLS]) {
    for (auto player: playerSymbols) {
        if (checkPlayerWin(player, gameBoard)) {
            return player;
        }
    }
    return " ";
}

bool checkPlayerWin(const string &playerSymbol, string gameBoard[ROWS][COLS]) {
    for (int row{0}; row < ROWS; row++) {
        if (gameBoard[row][0] == playerSymbol && gameBoard[row][1] == playerSymbol &&
            gameBoard[row][2] == playerSymbol) {
            return true;
        }
    }
    for (int col{0}; col < COLS; col++) {
        if (gameBoard[0][col] == playerSymbol && gameBoard[1][col] == playerSymbol &&
            gameBoard[2][col] == playerSymbol) {
            return true;
        }
    }
    if (gameBoard[0][0] == playerSymbol && gameBoard[1][1] == playerSymbol &&
        gameBoard[2][2] == playerSymbol) {
        return true;
    }
    if (gameBoard[0][2] == playerSymbol && gameBoard[1][1] == playerSymbol &&
        gameBoard[3][0] == playerSymbol) {
        return true;
    }
    return false;
}


void runGame() {
    string gameBoard[ROWS][COLS];
    initializeGameBoard(gameBoard);
    bool gameInProgress{true};
    while (gameInProgress) {
        for (const auto &player: playerSymbols) {
            cout << endl << "Player " << player << "'s Move" << "-----------------------------------------------"
                 << endl;
            printGameBoard(gameBoard);
            getPlayerMove(player, gameBoard);
            if (checkForWin(gameBoard) == player) {
                cout << player << " has won!" << endl;
                printGameBoard(gameBoard);
                gameInProgress = false;
                break;
            }
            if (isBoardFull(gameBoard)) {
                cout << "The board is full, the game is a tie!" << endl;
                gameInProgress = false;
                break;
            }
        }
    }

}