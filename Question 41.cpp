/*Write a program to print all Armstrong numbers under 1000*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Armstrong numbers under 1000 are:\n";

    for (int num = 1; num < 1000; num++) {
        int sum = 0, temp = num;
        int n = 0;

        int count = temp;
        while (count != 0) {
            count /= 10;
            n++;
        }

        temp = num;
        
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, n);
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}

