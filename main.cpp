#include <iomanip>
#include <cmath>
#include <iostream>
#include <vector>


using namespace std;

void findMonksLinks(auto monkNumber, auto & monksLink, auto & firstMonkLinks) {
    if (monksLink[monkNumber] != 0) {
        firstMonkLinks.push_back(monksLink[monkNumber]);
        findMonksLinks(monksLink[monkNumber], monksLink, firstMonkLinks);
    }
}


void printTeachersForMonk(int monkNumber, auto &monksLink) {
    if (monksLink[monkNumber] == 1) {
        cout << "St. Paul";
        return;
    }
    if (monksLink[monkNumber] != 0) {
        cout << monksLink[monkNumber] << " ";
        printTeachersForMonk(monksLink[monkNumber], monksLink);
    }
}

int main() {
    int monks[601][3] = {0}, n;
    cout << "Enter the number of data rows\n";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int monkNumber;
        cin >> monkNumber;
        for (int j = 0; j < 3; ++j) {
            cin >> monks[monkNumber][j];
        }
    }
    int monksLink[601] = {0};
    for (int i = 0; i < 601; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (monks[i][j] != 0) {
                monksLink[monks[i][j]] = i;
            }
        }
    }
    cout << "Enter the number of tasks\n";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int taskNumber, firstMonk, secondMonk;
        cin >> taskNumber;
        if (taskNumber == 1) {
            cin >> firstMonk;
            if (monksLink[firstMonk] != 0) {
                cout << firstMonk << " is a monk, his teachers: ";
                printTeachersForMonk(firstMonk, monksLink);
            } else {
                cout << firstMonk << " is not a monk";
            }
            cout << "\n";
        }
        else if (taskNumber == 2) {
            cin >> firstMonk >> secondMonk;
            if (monksLink[firstMonk] == 0 or monksLink[secondMonk] == 0) {
                cout << "One of the introductory is not a monk\n";
            } else {
                vector <int> firstMonkLinks;
                vector <int> secondMonkLinks;
                findMonksLinks(firstMonk, monksLink, firstMonkLinks);
                findMonksLinks(secondMonk, monksLink, secondMonkLinks);\
                bool flag = false;
                for (auto & teacherNumber : firstMonkLinks) {
                    auto founded = find(secondMonkLinks.begin(), secondMonkLinks.end(), teacherNumber);
                    if (founded != secondMonkLinks.end()) {
                        if (teacherNumber == 1) {
                            cout << firstMonk << " and " << secondMonk << " are monks, their common teacher is St. Paul\n";
                        } else {
                            cout << firstMonk << " and " << secondMonk << " are monks, their common teacher is " << teacherNumber << "\n";
                        }
                        flag = true;
                        break;
                    }
                }
                if (!flag) {
                    cout << firstMonk << " and " << secondMonk << " are monks, they don't have a common teacher\n";
                }
            }
        }
    }
    return 0;
}