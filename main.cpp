#include <iostream>
#include <stack>

using namespace std;

char digitPreprocess(int n)
{
    if (n < 10) return n + '0';
    else if (n >= 10) {
        return 'A' + (n - 10);
    }
}

int main()
{
    int a, b;
    string number;
    cout << "Input base a, base b, number\n";
    cin >> a >> b >> number;
    if ((a < 0) or (b < 0) or (a > 16) or (b > 16)) {
        cout << "Wrong input";
        return -1;
    }
    for (auto c : number) {
        if (c >= 'A') {
            if ((c - 'A' + 10) > a) {
                cout << "Wrong input";
                return -1;
            }
        }
        else {
            if ((c - '0') > a) {
                cout << "Wrong input";
                return -1;
            }
        }
    }
    int tempNumber = 0;
    int numberSize = number.size();
    for (int i = 0; i < numberSize; ++i) {
        if (number[i] >= 'A') {
            tempNumber += (number[i] - 'A' + 10) * pow(a, numberSize - i - 1);
        }
        else {
            tempNumber += (number[i] - '0') * pow(a, numberSize - i - 1);
        }
    }
    number = "";
    stack <char> remainders;
    if (tempNumber == 0) number = "0";
    while(tempNumber > 0) {
        char rem = digitPreprocess(tempNumber % b);
        tempNumber = tempNumber / b;
        remainders.push(rem);
    }
    while (!remainders.empty()) {
        number += remainders.top();
        remainders.pop();
    }
    cout << number;
    return 0;
}
