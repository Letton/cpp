#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float R, r, h, l;
	cin >> R >> r >> h >> l;
	cout << "V = " << 1.0 / 3.0 * M_PI * h * (R * R + R * r + r * r) << '\n';
	cout << "S = " << M_PI * (R * R + (R + r) * l + r * r);
}