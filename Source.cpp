#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float S, m, n;
	cin >> S >> m >> n;
	float p = 0.00001;
	float r = p / 100;
	while (m > (S * r * pow((1 + r), n) / (12 * (pow((1 + r), n) - 1)))) {
		p+=0.00001;
		r = p / 100;
	}
	cout << floor(p);
}