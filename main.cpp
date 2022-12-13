#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string generateRandomNumber() {
    string str;
    while (str.length() != 4) {
        char randDigit = char('0' + rand() % 10);
        if (!str.contains(randDigit)) {
            str += randDigit;
        }
    }
    return str;
}

bool isCorrectNumber(string & str) {
    if (str.length() != 4)
        return false;
    for (auto & chr : str) {
        if (count(str.begin(), str.end(), chr) > 1) {
            return false;
        }
        if (std::isdigit(chr) == 0)
            return false;
    }
    return true;
}



int main() {
    srand(time(nullptr));
    cout << "This program \"conceives\" a four-digit number that does not contain two of the same digits!\n"
            "You enter your number and the computer reports the number of pluses (correctly guessed\n"
            "numbers, i.e., standing in their places) and minuses (numbers that are in the intended number,\n"
            "but elsewhere).\n";
    string randomNumber = generateRandomNumber();
    string str;
    int pluses = 0, minuses = 0;
    while (pluses != 4) {
        pluses = 0, minuses = 0;
        cout << "Input number\n";
        getline(cin, str);
        while (!isCorrectNumber(str)) {
            cout << "Please, input correct number\n";
            getline(cin, str);
        }
        for (int i = 0; i < str.length(); ++i) {
            if (randomNumber.contains(str[i])) {
                if (randomNumber.find(str[i]) == i) {
                    pluses += 1;
                }
                if (randomNumber.find(str[i]) != i) {
                    minuses += 1;
                }
            }
        }
        cout << randomNumber << "\n";
        for (int i = 0; i < pluses; ++i) {
            cout << "+";
        }
        for (int i = 0; i < minuses; ++i) {
            cout << "-";
        }
        cout << "\n";
    }
    cout << "You WON!";
    return 0;
}