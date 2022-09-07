#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float x, y, b;
	cin >> x >> y >> b;
	if (((b - y) <= 0) or ((b - x) <= 0)) {
		cout << "No solution";
	}
	else {
		cout << "z = " << log(b - y) * sqrt(b - x);
	}

}