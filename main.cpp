#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string filename, text;
    cout << "Input filename\n";
    cin >> filename;
    ifstream filein(filename);
    if (!filein) {
        cout << "Error creating file";
        return -1;
    }
    cout << "Input char to count\n";
    char c;
    cin >> c;
    int counter = 0;
    while (getline(filein, text))
    {
        counter += count(text.begin(), text.end(), c);
    }
    cout << "Number of occurrences of \"" << c << "\" in " << filename << ": " << counter << " times";
    return 0;
}