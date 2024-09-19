#include <iostream>

using std::cout;
using std::endl;

//call by address
void swap(int* a, int* b);
//call by reference
void swap2(int& c, int& d);

int main()
{
    int a, b;
    a=2;
    b=3;
    swap(&a, &b);
    cout << a << " " << b << endl;

    int c,d;
    c=2;
    d=3;
    swap2(c,d);
    cout << c << " " << d << endl;

    return 0;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap2(int& c, int& d) {
    int temp = c;
    c = d;
    d = temp;
}

