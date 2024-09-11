#include <iostream>

using namespace std;

void repeatChar(char ch, int n=1, char end = '\n');

int main() {

    repeatChar('*');
    repeatChar('*', 5);

    return 0;
}

void repeatChar(char ch, int n, char end) {
    for (int i = 0; i < n; i++) {
        cout << ch;
    }
    cout << end;
}
