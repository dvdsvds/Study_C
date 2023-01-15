#include <stdio.h>

int main(void) {
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int *lptr = &arr[0][0];
    int *rptr = &arr[2][3];

    for(int i = 0; i < 6; i++) {
        printf("%d ", *lptr);
        lptr++;

        printf("%d ", *rptr);
        rptr--;
    }
}
