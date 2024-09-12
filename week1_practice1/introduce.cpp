#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;

void introduce(const char* name, int age=20, const char* nation = "대한민국");

int main()
{
    char name[10];
    cout << "Enter your name: ";
    cin >> name;

    int age;
    cout << "Enter your age: ";
    cin >> age;

    char nation[10];
    cout << "Enter your nation: ";
    cin >> nation;

    introduce(name, age, nation);

    return 0;
}

void introduce(const char* name, int age, const char* nation) {
    cout << "안녕하세요, 제 이름은 " << name << "입니다.\n" << "저는 " << age << "살이고, " << nation << "에서 왔습니다." << endl;
}
