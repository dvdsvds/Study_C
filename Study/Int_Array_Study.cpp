#include <iostream>

using namespace std;

int main(void) {
    int array[3];
    int array1[10] = {4,1,7,64,3,18,9,2,1,33};
    int array2[] = {4,1,7,64,3,18,9,2,1,33};
    int array3[10] = {4,1,7,64,3};
    int i;

    array[0] = 100;
    array[1] = 200;
    array[2] = 300;

    for(int i = 0; i < 3; i++) {
        cout << "array[" << i << "]의 값 : " << array[i] << endl;
    }

    cout << "===============================" << endl;

    for(int i = 0; i < 10; i++) {
        cout << "array[" << i << "]의 값 : " << array1[i] << endl;
    }

    cout << "===============================" << endl;

    for(int i = 0; i < 10; i++) {
        cout << "array[" << i << "]의 값 : " << array2[i] << endl;
    }

    cout << "===============================" << endl;
    
    for(int i = 0; i < 10; i++) {
        cout << "array[" << i << "]의 값 : " << array3[i] << endl;
    }
}
