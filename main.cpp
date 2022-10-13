#include <iostream>
#include <stack>
#include <map>

using namespace std;

map <char, int> SYMBOLS ({{ 'I', 1 }, { 'V', 5 }, { 'X', 10 }, { 'L', 50 }, { 'C', 100 }, { 'D', 500 }, { 'M', 1000 }});

int main()
{
    int sum = 0;
    cout << "Input Roman Numeral number\n";
    string number;
    cin >> number;
    for (int i = 0; i < number.length(); ++i)
    {
        if (SYMBOLS[number[i]] == 0) {
            cout << "Incorrect input";
            return -1;
        }
        if (SYMBOLS[number[i]] < SYMBOLS[number[i + 1]])
        {
            sum += SYMBOLS[number[i + 1]] - SYMBOLS[number[i]];
            ++i;
            continue;
        }
        sum += SYMBOLS[number[i]];
    }
    cout << "Integer form of Roman Numeral is " << sum;
    return 0;
}
