#include <stdio.h>

int main(void) {
    int used[10];
    int i;
    int x;
    int count;

    for (i = 0; i <= 9; i++) {
        used[i] = 0;
    }

    count = 0;

    printf("Please select 3 numbers from 0 to 9\n");
    while (count < 3) {
        printf("Please input a number: ");
        scanf("%d", &x);

        if (x < 0 || x > 9) {
            printf("The range is 0~9\n");
            continue;
        }


        if (used[x] == 1) {
            printf("%d is already selected. Please select another number.\n", x);
            continue;
        }

        used[x] = 1;
        count++;
    }

    printf("Selected numbers: ");
    for (i = 0; i <= 9; i++) {
        if (used[i] == 1) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}
