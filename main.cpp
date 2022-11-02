#include <iostream>
#include <stack>
#include <map>

using namespace std;

int isPrime(int n) {
    for (int i = 3; i <= sqrt(n); i+=2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Input output limit for prime numbers";
    cin >> n;
    cout << 2;
    for (int i = 3; i <= n; i+=2) {
        if (isPrime(i)) {
            cout << ", " << i;
        }
    }
    return 0;
}
