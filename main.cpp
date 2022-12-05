#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int moves = 0;

void hanoi(int n, int i, int k) {
    moves += 1;
    if (n == 1) {
        cout << "Move disk 1 from " << i << " to " << k << '\n';
    } else {
        int temp = 6 - i - k;
        hanoi(n - 1, i, temp);
        cout << "Move disk " << n << " from " <<  i << " to " << k << '\n';
        hanoi(n - 1, temp, k);
    }
}



int main() {
    int n;
    cout << "Input count of disks\n";
    cin >> n;
    hanoi(n, 1, 2);
    cout << "Total transfers: " << moves;
    return 0;
}