/* Write a program to check whether a given number is
there in the Fibonacci series or not*/

#include<iostream>
using namespace std;

int main(){
	int num, a=0, b=1, c;
	cout<<"Enter a num: ";
	cin>>num;
	
	while(b < num){
		c = a + b;
		a = b;
		b = c;
	}
	if(b == num || num == 0){
		cout<<num<<" is in the Fibonacci series: "<<endl;
		
		}else{
			cout<<num<<" is Not the fibonacci series: "<<endl;
	}
	return 0;
}
