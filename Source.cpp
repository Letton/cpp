#define _USE_MATH_DEFINES

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

double rectangle_square(double a, double b) {
	return a * b;
}

double circle_square(double r) {
	return r * r * 3.14;
}


int main() {
	char c;
	cout << "Input R for retangle, C for circle\n";
	cin >> c;
	if (c == 'R') {
		double a, b;
		cout << "Input a, b\n";
		cin >> a >> b;
		if ((a < 0) || (b < 0)) {
			cout << "Incorrect input";
			return -1;
		}
		cout << "S = ab\n";
		cout << "S = " << a << " * " << b << " = " << rectangle_square(a, b);
	}
	else if (c == 'C') {
		double r;
		cout << "Input radius\n";
		cin >> r;
		if (r < 0) {
			cout << "Incorrect input";
			return -1;
		}
		cout << "S = pi * r^2\n";
		cout << "S = 3,14 * " << r << "^2 = " << circle_square(r);
	}
	else {
		cout << "Incorrect input";
		return -1;
	}
	return 0;
}