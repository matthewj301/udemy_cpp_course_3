#include <stdio.h>
#include <iostream>

void update(int *,int *);

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

void update(int *a, int *b) {
    int aSum = *a + *b;
    std::cout << aSum;
    int aDiff = a - b;
    std::cout << aDiff;

    a = &aSum;
    b = &aDiff;

}