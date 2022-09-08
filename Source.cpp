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
		for (int i = 0; i < fileline.length(); ++i) {
			if (fileline[i] >= '0' and fileline[i] <= '9')
				cout << fileline[i];
		}
		cout << "\n";
	}

	file.close();

}