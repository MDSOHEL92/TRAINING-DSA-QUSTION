/*Write a program to find next Prime number of a given
number.*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int next = num + 1;
    while (true) {
        bool isPrime = true;

        for (int i = 2; i <= next / 2; i++) {
            if (next % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << "Next prime number is: " << next << endl;
            break;
        }
        next++;
    }

    return 0;
}

