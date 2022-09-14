#define _USE_MATH_DEFINES

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int sign(int x) {
	return x > 0 ? 1 : x == 0 ? 0 : -1;
}

int main() {
	int n;
	cin >> n;
	cout << sign(n);
}