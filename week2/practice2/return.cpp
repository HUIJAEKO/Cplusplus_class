#include <iostream>

using std::cout;
using std::endl;

//return by address
int* increment(int& a);

//return by reference
int& increment2(int& c);

int main()
{
    int a=3;
    int* b = increment(a);
    cout<<*b<<endl;

    int c=3;
    int& d = increment2(c);
    cout<<d<<endl;

    return 0;
}

int* increment(int& a) {
    a=a+1;
    return &a;
}

int& increment2(int& c) {
    c=c+1;
    return c;
}

