#include <stdio.h>

int main(void) {
    int a;
    int b;
    int c;

    printf("Enter real numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int result = b ^ 2 - 4 * a * c;

    if (result > 0) {
        printf("Two solutions\n");
    } else if (result == 0) {
        printf("One solution\n");
    } else {
        printf("No solution\n");
    }

    return 0;
}
