#include <stdio.h>

int main() {
    int first = 10;
    int second = 20;
    int third = 30;

    first = first + second + third;
    second = first + second + third;
    third = first + second + third;

    printf("Result: %d, %d, %d\n", first, second, third);
}
