#include <iostream>

using namespace std;

int main() {
    const char *ptr = "Hello";
    cout << *ptr << endl; // ptr의 주소 0번째에 있는 H 출력
    
    cout << "=================" << endl;
    cout << ptr + 1 << endl;

    cout << "=================" << endl;
    cout << *ptr + 1 << endl;

    cout << "=================" << endl;
    cout << ptr << endl; // 문자열 그대로 출력

    int len = 0;
    while(*(ptr + (++len)));

    cout << "=================" << endl;
    cout << len << endl;

    cout << "=================" << endl;
    cout << &ptr << endl;

    int nu = 9;
    int *i = &nu;

    cout << "=================" << endl;
    cout << nu << endl;;

    cout << "=================" << endl;
    cout << i << endl; //i는 nu의 주소를 가져옴
   
    cout << "=================" << endl;
    cout << *i << endl;
    
}
