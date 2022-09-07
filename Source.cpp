#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float x, a;
	cin >> x >> a;
	if (abs(x) < 1) {
		cout << "w = " << a * log(abs(x));
	} else {
		if ((a - x * x) < 0) {
			cout << "No solution";
		}
		else {
			cout << "w = " << sqrt(a - x * x);
		}
	}
}