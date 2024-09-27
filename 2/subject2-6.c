#include <stdio.h>

int main(void) {
    double x, y;
    
    printf("Please enter the value of x: ");
    scanf("%lf", &x);

    double result_denominator = x * x - 4;
    if (result_denominator == 0) {
        printf("No solution\n");
        return 0;
    }

    double result_numerator = (3 * x - 7) * (8 * x + 9);
    double result = result_numerator / result_denominator;

    printf("y=%.3lf\n", result);

    return 0;
}
