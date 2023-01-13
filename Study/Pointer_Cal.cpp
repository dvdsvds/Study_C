#include <iostream>

using namespace std;

int Plus(int *a, int b) {
    return *a + b;
}

int Subtract(int *a, int b) {
    return *a - b;
}

int Multiply(int *a, int b) {
    return *a * b;
}

int Division(int *a, int b) {
    return *a / b;
}

int main(void) {
   int x, y; 
   cin >> x >> y;
   int *xptr = &x;

   cout << "Plus     : " << Plus(xptr, y) << endl;
   cout << "Subtract : " << Subtract(xptr, y) << endl;
   cout << "Multiply : " << Multiply(xptr, y) << endl;
   cout << "Division : " << Division(xptr, y) << endl;

}


