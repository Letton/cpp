#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <map>

using namespace std;

int main() {
    map <int, int> numbers;
    string filename, text;
    cout << "Input filename\n";
    cin >> filename;
    ifstream filein(filename);
    int n;
    while (filein >> n) {
        numbers[n] += 1;
    }
    int max_n, maxx = 0;
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << (*it).first << " : " << (*it).second << endl;
    }
    return 0;
}