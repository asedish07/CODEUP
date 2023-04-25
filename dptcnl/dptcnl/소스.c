#include <stdio.h>

int main(void) {
    int a[3] = {}, b[7] = {};
    scanf("%d%d%d-%d%d%d%d%d%d%d", &a[1], &a[2], &a[3], &b[1], &b[2], &b[3], &b[4], &b[5], &b[6], &b[7]);
    if (b[1] > 2) {
        printf("19%d/", a[1]);
    }
    else {
        printf("20%d", a[1]);
    }
    printf("%d/", a[2]);
    printf("%d ", a[3]);
    if (b[1] == 1 || b[1] == 3) {
        printf("M");
    }
    else {
        printf("F");
    }


    return 0;
}