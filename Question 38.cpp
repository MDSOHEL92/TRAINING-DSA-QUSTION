/*Write a program to print all Prime numbers between two given numbers.*/

#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter two numbers: ";
    cin >> start >> end;

    cout << "Prime numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; num++) {
        if (num < 2) continue;
        bool isPrime = true;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << num << " ";
    }

    return 0;
}

