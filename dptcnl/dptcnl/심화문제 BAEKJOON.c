#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
    int n, a=1;
    scanf("%d", &n);
    if (n == 0) {
        printf("1");
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        a *= i;
    }
    printf("%d", a);

    return 0;
}