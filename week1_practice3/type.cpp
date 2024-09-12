#include <iostream>

using std::endl;
using std::cout;

void type(int n);
void type(double n);
void type(bool n);
void type(char * n);

int main()
{
    char string[] = "hello";

    type(1004);
    type(3.14);
    type(true);
    type(string);

    return 0;
}

void type(int n) {
    cout << n << "은 정수형입니다" << endl;
}

void type(double n) {
    cout << n << "은 실수형입니다" << endl;
}

void type(bool n) {
    cout << n << "은 논리형입니다" << endl;
}

void type(char * n) {
    cout << n << "은 문자열입니다" << endl;
}