/*Write a program to reverse a given number*/

#include<iostream>
using namespace std;

int main(){
	int num, reversed = 0, md;
	
	cout<<"Enter a num : ";
	cin>> num;
	
	while(num != 0){
		md = num % 10;
		reversed = reversed * 10 + md;
		num = num / 10;
	}
	cout <<" Reversed num = "<<reversed << endl;
	return 0;
	
}
