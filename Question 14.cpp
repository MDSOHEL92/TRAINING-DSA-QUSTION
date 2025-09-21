/*Write a program that reads two integers from the user
and determines if the first integer is divisible by the second
integer*/

#include<iostream>
using namespace std;

int main(){
	int num1, num2;
	
	cout<<"Enter two integer:";
	cin>>num1>>num2;
	
	if(num2 == 0){
		cout<<"Division by zero is not allowed:"<<endl;
	}
	
	else if(num1 % num2 == 0){
		cout<<num1<<"Divisible by"<<num2<<endl;
	}
	
	else{
		cout<<num1<<"Not divisible"<<num2<<endl;
	}
	
	return 0;
}
