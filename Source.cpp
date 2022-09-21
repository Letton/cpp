#define _USE_MATH_DEFINES

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int binarySearch(int arr[], int p, int r, int num) {
	if (p <= r) {
		int mid = (p + r) / 2;
		if (arr[mid] == num)
			return mid;
		if (arr[mid] > num)
			return binarySearch(arr, p, mid - 1, num);
		if (arr[mid] < num)
			return binarySearch(arr, mid + 1, r, num);
	}
	return -1;
}

int main() {
	int w, h;
	w = 80;
	h = 20;
	cin >> w >> h;
	vector <vector<int>> data(h);
	vector <int> test;
	int counter = 0;
	for (double i = 0; i < (0.2 * w); i += 0.2) {
		data[floor(h / 2 - (sin(i) * h / 2))].push_back(counter);
		++counter;
	}
	for (int i = 0; i < h; ++i) {
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