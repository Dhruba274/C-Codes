#include <stdio.h>
int power(int a, int b);
int main() {
    int base, x, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &x);
    result = power(base, x);
    printf("%d^%d = %d", base, x, result);
    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}