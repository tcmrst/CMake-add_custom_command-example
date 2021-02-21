#include <stdio.h>

int sum(int x, int y) {
    return x + y;
}

int main() {
    int onePlusTwo = sum(1, 2);
    printf("%d\n", onePlusTwo);
    return 0;
}