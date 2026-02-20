#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int total = 0;

    for (int i = 1; i <= number; i++) {
        total += i;
    }

    printf("Total: %d\n", total); 
    return 0;
}
