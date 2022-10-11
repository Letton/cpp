#include <iostream>

using namespace std;

struct Seller {
    int index;
    float price;
};

int main()
{
    const float A[3][4] = {{5, 2,  0, 10}, {3, 5, 2, 5}, {20, 0, 0, 0}};
    const float B[4][2] = {{1.20, 0.50}, {2.80, 0.40}, {5.00, 1.00}, {2.00, 1.50}};
    float C[3][2];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            float sum = 0;
            for (int k = 0; k < 4; ++k) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
    Seller maxPrice = {0,-INFINITY};
    Seller minPrice = {0, INFINITY};
    Seller maxCommission = {0,-INFINITY};
    Seller minCommission = {0, INFINITY};
    float totalSum = 0;
    float totalCommission = 0;
    float totalSumAndCommission = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            totalSumAndCommission += C[i][j];
            if (j == 0) {
                totalSum += C[i][j];
            }
            if (j == 1) {
                totalCommission += C[i][j];
            }
            if (C[i][0] > maxPrice.price) {
                maxPrice.price = C[i][0];
                maxPrice.index = i + 1;
            }
            if (C[i][0] < minPrice.price) {
                minPrice.price = C[i][0];
                minPrice.index = i + 1;
            }
            if (C[i][0] > maxCommission.price) {
                maxCommission.price = C[i][0];
                maxCommission.index = i + 1;
            }
            if (C[i][0] < minCommission.price) {
                minCommission.price = C[i][0];
                minCommission.index = i + 1;
            }

        }
    }
    cout << "The number of the seller who received the most money from the sale: " << maxPrice.index << "\n";
    cout << "The number of the seller who received the least money from the sale: " << minPrice.index << "\n";
    cout << "The number of the seller who received the highest commission: " << maxCommission.index << "\n";
    cout << "The number of the seller who received the lowest commission: " << minCommission.index << "\n";
    cout << "The total amount of money received from goods sold: " << totalSum << "\n";
    cout << "Total commission received sellers: " << minCommission.index << "\n";
    cout << "The total amount of money passed through the hands of sellers: " << totalSumAndCommission << "\n";
    return 0;
}
