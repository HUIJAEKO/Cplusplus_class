#include <iostream>
#include <cmath>
bool isPrime(int n);
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    if(isPrime(n)) {
        cout << n << " is a prime number." << endl;
    }else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}

bool isPrime(int n) {
    if(n < 2) {
        return false;
    }

    if(n == 2) {
        return true;
    }

    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

