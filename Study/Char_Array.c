#include <stdio.h>

int main(void) {

    char string1[10] = "ABCDEF";
    char string2[] = "ABCDEF";
    char string3[] = {'A', 'B', 'C', 'D', 'F'};
    char string4[] = {'A', 'B', 'C', 'D', 'F', '\0'};

    printf("%s\n", string1);
    printf("%s\n", string2);
    printf("%s\n", string3);
    printf("%s\n", string4);
}

