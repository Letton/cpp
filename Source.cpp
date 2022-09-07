#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float S, p, n;
	cin >> S >> p >> n;
	float r = p / 100;
	cout << "m = " << S * r * pow((1 + r), n) / (12 * (pow((1 + r), n) - 1));
}