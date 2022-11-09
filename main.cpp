#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    int n;
    string filename, text;
    cout << "Input filename\n";
    cin >> filename;
    ofstream fileout(filename);
    if (!fileout) {
        cout << "Error creating file";
        return -1;
    }
    cout << "Input text ends with 0\n";
    cin.ignore();
    getline(cin, text, '0');
    fileout << text;
    fileout.close();
    cout << "File was successfully written";
    return 0;
}