/*Question 52*/

#include <iostream>
using namespace std;

int main() {
    int n = 7;  // height of the W

    for (int i = 1; i <= n; i++) {
        // Left side
        cout << "*";
        for (int j = 1; j <= n - 1; j++) {
            if (i == j)
                cout << "*";
            else
                cout <<" ";
        }

        // Middle space
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Right side
        cout << "*";
        for (int j = 1; j <= n - 1; j++) {
            if (i + j == n)
                cout << "*";
            else
                cout <<" ";
        }

        cout << endl;
    }
    return 0;
}
