#include <iostream>
using namespace std;

int main() {
    int depth;

    cout << "Enter depth: ";
    cin >> depth;

    for (int i = depth; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}