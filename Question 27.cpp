/* Write a program to calculate factorial of a number*/

#include<iostream>
using namespace std;

int main(){
	int n;
	long long fact = 1; /// use long long for large number
	
	cout<<"Enter a num : ";
	cin>> n;
	
	for(int i=1; i<=n; i++){
		fact = fact * i;
	}
	cout<<"Factorial of "<<n<<" = "<<fact;
	return 0;
}
