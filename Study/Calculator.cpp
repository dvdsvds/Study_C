#include <iostream>

using namespace std;

int Plus(int a, int b) {
    return a + b;
}

int Subtract(int a, int b) {
    return a - b;
}

int Multiply(int a, int b) {
    return a * b;
}

int Division(int a, int b) {
    return a / b;
}

int main(void) {
   int x, y; 
   cin >> x >> y;

   cout << "Plus : " << Plus(x, y) << endl;
   cout << "Subtract : " << Subtract(x, y) << endl;
   cout << "Multiply : " << Multiply(x, y) << endl;
   cout << "Division : " << Division(x, y) << endl;
}

