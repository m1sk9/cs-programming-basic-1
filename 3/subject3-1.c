#include <stdio.h>

int main(void) {
    int point;

    printf("Enter your math score: ");
    scanf("%d", &point);

    if (point < 60) {
        printf("Fail\n");
    } else if (point < 70) {
        printf("Pass\n");
    } else if (point < 90) {
        printf("Good\n");
    } else {
        printf("Excellent\n");
    }

    return 0;
}
