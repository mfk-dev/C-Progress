#include <stdio.h>
int main() {

    int age;
    float height;

    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Please enter your height: ");
    scanf("%f", &height);

    printf("Age: %d, height: %.2f\n", age, height);

    if (age >= 18) {
        printf("You are an adult.\n");
    } else if (yas >= 13) {
        printf("You are a teen.\n");
    } else {
        printf("You are a child.\n");
    }

    return 0;
}
