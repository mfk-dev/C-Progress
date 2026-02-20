#include <stdio.h>

int main() {
    int number;

    printf("Enter a number between 1-10: ");
    scanf("%d", &number);

    while (number < 1 || number > 10) {
        printf("Wrong, please try again: ");
        scanf("%d", &number);
    }

    printf("Correct, you entered %d.\n", number);
    return 0;
}
