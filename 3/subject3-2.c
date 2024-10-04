#include <stdio.h>

int main(void) {
    int a, h;

    printf("How many legs? ");
    scanf("%d", &a);
    printf("Does it have wings? Yes: 1 No: any other number ");
    scanf("%d", &h);

    if (h == 1) {
        switch (a) {
            case 2: printf("Sparrow\n"); break;
            case 6: printf("Bee\n"); break;
        }
    } else {
        switch (a) {
            case 2: printf("Human\n"); break;
            case 4: printf("Human\n"); break;
            case 6: printf("Ant\n"); break;
            case 8: printf("Spider\n"); break;
        }
    }

    return 0;
}
