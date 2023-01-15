#include <stdio.h>

int main(void) {
    int a = 1, b = 2, c = 3;
    int* ptr[3] = {NULL, NULL, NULL};

    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;

    printf("%d %d %d\n", a,b,c);

    *ptr[0] = *ptr[0] + 1;
    *ptr[1] = *ptr[1] + 1;
    *ptr[2] = *ptr[2] + 1;

    printf("%d %d %d\n", a,b,c);
}


