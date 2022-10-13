#include <iostream>
#include <stack>
#include <map>

using namespace std;

const int M = 37, C = 64, A = 7;

int pseudoRandom(int i) {
    if (i == 0)
        return (A * 29 + C) % M;
    return (A * pseudoRandom(i - 1) + C) % M;
}



int main()
{
    int n;
    cout << "Input seed\n";
    cin >> n;
    cout << "P1seudo-random value is " << pseudoRandom(n);
    return 0;
}
