#include <stdio.h>

void print_array(int arr[]){
    arr++;
}

int main(void) {
    int array[] = {1,2,3,4,5};
    print_array(array);
}

