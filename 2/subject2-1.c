#include <stdio.h>

int main(void) {
    int first;
    int second;

    printf("Enter an integer: ");
    scanf("%d", &second);

    first = second % 2;

    if (first == 0) {
        printf("%d is even\n", second);
    } else {
        printf("%d is odd\n", second);
    }

    return 0;
}
