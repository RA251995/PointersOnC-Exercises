#include <stdio.h>

int main() {
    int ch;
    int balance = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == '{') {
            balance += 1;
        }
        else if (ch == '}') {
            balance -= 1;
            if (balance < 0) {
                break;
            }
        }
    }

    if (balance == 0) {
        printf("Braces paired correctly!");
    }
    else {
        printf("Braces NOT paired correctly!");
    }

    return 0;
}