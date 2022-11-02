#include <iostream>
#include <stack>
#include <map>

using namespace std;

int recursiveGCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return recursiveGCD(b, a % b);
}

int main()
{
    int a, b, c;
    cout << "Choose a way to find GCD:\n0 - Subtraction, 1 - Division, 2 - Recursive\n";
    cin >> c;
    if ((c < 0) or (c > 2)) {
        cout << "Incorrect input";
        return -1;
    }
    cout << "Input number: a, b\n";
    cin >> a >> b;
    if (c == 0) {
        while (max(a, b) - min(a, b) != 0) {
            if (a == max(a, b)) {
                a = max(a, b) - min(a, b);
            } else {
                b = max(a, b) - min(a, b);
            }
        }
        cout << a;
    } else if (c == 1) {
        while (b) {
            a %= b;
            swap (a, b);
        }
        cout << a;
    } else if (c == 2) {
        cout << recursiveGCD(a, b);
    }
    return 0;
}
