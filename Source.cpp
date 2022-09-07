#include <iostream>
#include <cmath>

using namespace std;

int main() {
	bool time, curtains, lamp;
	cin >> time >> curtains >> lamp;
	if ((time == 1 and curtains == 1) or (lamp == 1)) {
		cout << "Light";
	}
	else {
		cout << "Dark";
	}
}