/*Write a program to check whether a given number is an Armstrong number or no*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, remainder, n = 0;
    int result = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    if (result == original){
	
        cout << num << " is an Armstrong number." << endl;
    }
    else{
        cout << num << " is NOT an Armstrong number." << endl;
    }

    return 0;
}

