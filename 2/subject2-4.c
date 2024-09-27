#include <stdio.h>

int main(void) {
    int first;
    int second;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    if (first > second) {
        printf("The larger value is %d.\n", first);
    } else {
        printf("The larger value is %d.\n", second);
    }

    return 0;
}
