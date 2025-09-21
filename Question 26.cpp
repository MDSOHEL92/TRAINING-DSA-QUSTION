/* Write a program to calculate sum of cubes of first N
natural numbers */

#include<iostream>
using namespace std;

int main(){
	int n, sum = 0;
	cout<<"Enter a num: ";
	cin>> n;
	
	for(int i=1; i<=n; i++){
		sum += i*i*i; // cube of i
	}
	cout<<"Sum of cubes of first"<<n<<" natural num = "<<sum;
	
	return 0;
}
