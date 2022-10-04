#define _USE_MATH_DEFINES

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <Windows.h>

using namespace std;


int main() {
	int w, h;
	w = 80;
	h = 20;
	vector <vector<int>> data(h + 1);
	int counter = 0;
	for (double i = 0; i < (0.2 * w); i += 0.2) {
		data[round(h / 2 - (sin(i) * h / 2))].push_back(counter);
		++counter;
	}
	for (int i = 0; i < w / 2 - 1; ++i) {
		cout << " ";
	}
	cout << "^\n";
	for (int i = 0; i < h / 2; ++i) {
		for (int j = 0; j < data[i].size(); ++j) {
			if (j == 0) {
				for (int k = 0; k < data[i][j]; ++k) {
					if (k == (w / 2 - 1))
						cout << '|';
					else
						cout << " ";
				}
				if (data[i][j] == (w / 2 - 1))
					cout << '|';
				else
					cout << "*";
			}
			else {
				for (int k = data[i][j - 1] + 1; k < data[i][j]; ++k) {
					if (k == (w / 2 - 1))
						cout << '|';
					else
						cout << " ";
				}
				if (data[i][j] == (w / 2 - 1))
					cout << '|';
				else
					cout << "*";
			}
		}
		for (int j = data[i][data[i].size() - 1]; j <= w; ++j) {
			if (j == (w / 2 - 2))
				cout << "|";
			else
				cout << " ";
		}
		cout << '\n';
	}
	int currentLine = h / 2;
	for (int j = 0; j < data[currentLine].size(); ++j) {
		if (j == 0) {
			for (int k = 0; k < data[h / 2][j]; ++k) {
				if (k == w / 2) 
					cout << "+";
				else
					cout << "-";

			}
			cout << "-";
		}
		else {
			for (int k = data[currentLine][j - 1] + 1; k < data[currentLine][j]; ++k) {
				if (k == (w / 2 - 1))
					cout << "+";
				else
					cout << "-";
			}
			cout << "-";
		}
	}
	for (int j = data[currentLine][data[currentLine].size() - 1]; j <= (w - 1); ++j) {
		cout << "-";
	}
	cout << ">";
	cout << "\n";
	for (int i = h / 2 + 1; i < h + 1; ++i) {
		for (int j = 0; j < data[i].size(); ++j) {
			if (j == 0) {
				for (int k = 0; k < data[i][j]; ++k) {

					if (k == (w / 2 - 1))
						cout << '|';
					else
						cout << " ";

				}
				cout << "*";
			}
			else {
				for (int k = data[i][j - 1] + 1; k < data[i][j]; ++k) {
					if (k == (w / 2 - 1))
						cout << '|';
					else
						cout << " ";
				}
				cout << "*";
			}
		}
		for (int j = data[i][data[i].size() - 1]; j <= w; ++j) {
			if (j == (w / 2 - 2))
				cout << "|";
			else
				cout << " ";
		}
		cout << '\n';
	}
	return 0;
}

