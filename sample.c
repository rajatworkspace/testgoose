#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int sum;

    // Intentional error: missing semicolon
    sum = a + b

    printf("The sum is %d\n", sum);
    return 0;
}
