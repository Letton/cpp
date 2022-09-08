#define _USE_MATH_DEFINES

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	cout << "Input filename\n";
	string filename, fileline;
	cin >> filename;
	ifstream file("./" + filename);
	if (!file) {
		cout << "Error opening file\n";
		return -1;
	}
	while (getline(file, fileline))
	{
		cout << fileline << "\n";
	}

	file.close();

}