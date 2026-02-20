#include <stdio.h>

int main() {
    int age;

    printf("Welcome to the NASA Application Form!\n");
    printf("Please enter your age: ");
    scanf("%d", &age);
    int remainingYears = 25 - age;

    if (age >= 25) {
    printf("You can apply!\n");
} else {
    printf("Unfortunately, you cannot apply. You must be at least 25 years old to apply.\n");
        printf("Number of years remaining until you turn 25: %d\n", remainingYears);
    }
    
    return 0;
}
