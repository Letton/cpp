#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <map>

using namespace std;

long sum = 0;

void generate(int t, vector <int> &a, int n) {
    if (t  == n - 1)
    {
        bool flag = false;
        for (int i = 0; i < n; ++i) {
            if (a[i] == i) {
                flag = true;
            }
        }
        sum += flag ? 1 : 0;
    }
    else {
        for (int j = t; j < n; ++j)
        {
            swap(a[t],a[j]);
            t++;
            generate(t, a ,n);
            t--;
            swap(a[t],a[j]);
        }
    }
}


int main() {
    int n;
    cout << "Input count of balls\n";
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; ++i)
        arr[i] = i;
    generate(0, arr, n);
    cout << "Total number of cases when the number of at least one withdrawn\n"
            "the number of balls conventionally with the ordinal number of the \"taking out\" action: " << sum;
    return 0;
}