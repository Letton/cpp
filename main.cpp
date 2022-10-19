#include <iostream>
#include <stack>
#include <map>

using namespace std;


const int M_0 = 37, B_0 = 3, C_0 = 64;

const int M_1 = 25173, B_1 = 13849, C_1 = 65537;


int pseudoRandom(int i, int variant) {
    if (variant == 0) {
        if (i == 0)
            return (M_0 * 29 + B_0) % C_0;
        return (M_0 * pseudoRandom(i - 1, variant) + B_0) % C_0;
    }
    if (variant == 1) {
        if (i == 0)
            return (M_1 * 29 + B_1) % C_1;
        return (M_1 * pseudoRandom(i - 1, variant) + B_1) % C_1;
    }
}

int main()
{
    int n, count;
    cout << "Input variant: 1 for small numbers or 2 for big numbers\n";
    cin >> n;
    cout << "Input count of numbers\n";
    cin >> count;
    for (int i = 1; i < (2 + count); ++i) {
        cout << pseudoRandom(i, n - 1) << "\n";
    }
    return 0;
}
