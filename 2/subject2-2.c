#include <stdio.h>

int main(void) {
    int first;
    int second;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    if (first == second) {
        printf("a and b are equal\n");
    } else {
        printf("a and b are different\n");
    }

    return 0;
}
