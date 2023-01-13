#include <stdio.h>

void func(int *arr, int len);

int main(void) {
    int arr[] = {1,2,3,4,5,6}; 
    func(arr, sizeof arr / sizeof(int)); //func(int arr[] => arr, int len => sizeof arr / sizeof(int))
}

void func(int *arr, int len) {
    for(int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

