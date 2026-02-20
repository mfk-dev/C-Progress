#include <stdio.h>
int main() {
    int age = 15;
    float height = 1.76;
    char firstletter = 'M';

    int a = 10;
    int b = 3;

    printf("Hi, this is MFK. Im %d years old, my height is %.2f and my nickname starts with: '%c'.\n", age, height, firstletter);

    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);
    return 0;
}

//* %d -> int
//* %f -> float
//* %c -> char
//* %s -> string (char array)
