#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct STRING_WITH_WORDS {
    string str;
    int words = 0;
};

bool comp(STRING_WITH_WORDS i, STRING_WITH_WORDS j) {
    return (i.words < j.words);
}

unsigned countWords(const char *str) {
    int state = 0;
    unsigned wc = 0;
    while (*str)
    {
        if (*str == ' ' || *str == '\n' || *str == '\t')
            state = 0;
        else if (state == 0)
        {
            state = 1;
            ++wc;
        }
        ++str;
    }
    return wc;
}

int main() {
    vector <STRING_WITH_WORDS> arr;
    cout << "Input number of strings\n";
    int n;
    cin >> n;
    cout << "Input strings\n";
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        STRING_WITH_WORDS sw;
        getline(cin, sw.str);
        const char* str = sw.str.c_str();
        sw.words = countWords(str);
        arr.push_back(sw);
    }
    sort(arr.begin(), arr.end(), comp);
    for (int i = 0; i < n; ++i) {
        cout << arr[i].str << " : " << arr[i].words << " words" << "\n";
    }
    return 0;
}