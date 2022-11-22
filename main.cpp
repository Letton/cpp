#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <map>

using namespace std;

int main() {
    map <int, int> numbers;
    vector <int> max_numbers;
    string filename, text;
    cout << "Input filename\n";
    cin >> filename;
    ifstream filein(filename);
    int n;
    while (filein >> n) {
        numbers[n] += 1;
        cout << n << " ";
    }
    cout << "\n";
    int maxx = 0;
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        if ((*it).second == maxx) {
            max_numbers.push_back((*it).first);
        }
        if ((*it).second > maxx) {
            maxx = (*it).second;
            max_numbers.clear();
            max_numbers.push_back((*it).first);
        }
    }
    cout << "Input output filename\n";
    cin >> filename;
    ofstream fileout(filename);
    for (auto number : max_numbers) {
        cout << number << " ";
        fileout << number << " ";
    }
    return 0;
}