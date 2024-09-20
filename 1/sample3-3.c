#include <stdio.h>

int main() {
    double first;
    double second;

    double result_add;
    double result_sub;
    double result_mul;
    double result_div;

    first = 31.41;
    second = 27.18;

    result_add = first + second; // 加算
    result_sub = first - second; // 減算
    result_mul = first * second; // 乗算
    result_div = first / second; // 除算

    printf("Result: %f, %f, %f, %f\n", result_add, result_sub, result_mul, result_div);
    return 0;
}
