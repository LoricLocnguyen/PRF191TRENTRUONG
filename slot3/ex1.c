#include <stdio.h>

int main() {
    int a = 7;
    int b = 2;
    float   result;

    result = a + b;
    printf("a + b = %.0f\n", result);

    result = a - b;
    printf("a - b = %.0f\n", result);

    result = a * b;
    printf("a * b = %.0f\n", result);

    result = (float)a/b;   // chia nguyên
    printf("%d / %d = %.2f", a , b , result );

    return 0;
}
