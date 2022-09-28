#define _USE_MATH_DEFINES

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
	int w, h;
	w = 80;
	h = 20;
	cin >> w >> h;
	vector <vector<int>> data(h + 1);
	vector <int> test;
	int counter = 0;
	for (double i = 0; i < (0.2 * w); i += 0.2) {
		data[round(h / 2 - (sin(i) * h / 2))].push_back(counter);
		++counter;
	}
	for (int i = 0; i < (h + 1); ++i) {
		for (int j = 0; j < data[i].size(); ++j) {
			if (j == 0) {
				for (int k = 0; k < data[i][j]; ++k) {
					cout << " ";
				}
				cout << "-";
			}
			else {
				for (int k = data[i][j - 1] + 1; k < data[i][j]; ++k) {
					cout << " ";
				}
				cout << "-";
			}
		}
		cout << '\n';
	}
	return 0;
}