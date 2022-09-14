#define _USE_MATH_DEFINES

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	cout << "Input filename\n";
	string filename, fileline;
	cin >> filename;
	ofstream fileout(filename);
	double arr[10];
	for (int i = 0; i < 10; ++i) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; ++i) {
		fileout << arr[i] << " ";
	}
	fileout.close();
	ifstream filein(filename);
	for (int i = 0; i < 10; ++i) {
		filein >> arr[i];
	}
	filein.close();
	double sum = 0;
	for (int i = 0; i < 10; ++i) {
		sum += arr[i];
	}
	cout << sum;

}