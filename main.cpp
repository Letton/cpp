#include <iostream>
#include <string>
#include <math.h>

using namespace std;

double func(int n) {
    return tgamma(n + 1) / pow(((1.0 + (1.0 / n)) * n / 2.0), n);
}


int main() {
    int n;
    cout << "Input n\n";
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += func(i);
    }
    cout << "Total sum: " << sum;
    return 0;
}