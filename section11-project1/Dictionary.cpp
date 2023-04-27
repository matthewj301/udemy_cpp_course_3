//
// Created by Matthew Johnson on 1/8/23.
//

#include "Dictionary.h"

Dictionary::Dictionary() {
    this->dictionary = map<string, string>();
}

void Dictionary::addDefinition(string word, string meaning) {
    this->dictionary[word] = meaning;
}

string Dictionary::getDefinition(string findWord) const {
    auto wordLookup = this->dictionary.find(findWord);
    if (wordLookup != this->dictionary.end()) {
        return wordLookup->second;
    } else{
        return findWord + " not found :(";
    }
}

void Dictionary::printAll() const {
    for (const auto& de: this->dictionary) {
        cout << de.first << ": " << de.second << endl;
    }
}