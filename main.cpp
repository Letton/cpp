#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
T fibonacci(T n) {
    if (n == 1 or n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    long long n;
    cout << "Input index of fibonacci number\n";
    cin >> n;
    if (n < 1) {
        cout << "Incorrect input";
        return -1;
    }
    cout << "Fibonacci number is " << fibonacci <long long> (n);
    return 0;
}