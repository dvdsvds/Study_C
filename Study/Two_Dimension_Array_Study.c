#include <stdio.h>

int main(void) {
    int array2[3][3];
    int i, j;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &array2[i][j]);
        }
    }
}

