#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

float func(float x) {
	return ((x * x - 2 * x + 2) / (x - 1));
}


int main() {
	for (float i = -4; i <= 4; i += 0.5) {
		cout << "x = " << i << "; y = " << func(i) << '\n';
	}
}