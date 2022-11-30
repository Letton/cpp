#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
double bine(T n) {
    double index = pow(5, 0.5);

    double left = (1 + index) / 2;
    double right = (1 - index) / 2;

    return round((pow(left, n) - pow(right, n)) / index);
}


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
    cout << "Fibonacci number by bine is " << bine <long long> (n) << "\n";
    cout << "Fibonacci number is " << fibonacci <long long> (n);
    return 0;
}