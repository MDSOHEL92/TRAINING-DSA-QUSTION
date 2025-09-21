/*  Write a program to check whether a given number is a
Prime number or not */

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int num;
	cout<<"Enter a num: ";
	cin>> num;
	
	if(num <= 1){
		cout<< num<<" is not a prime num. "<<endl;	
	}else{
		bool isPrime = true;
		
		for(int i=2; i<= sqrt(num); i++){
			if(num % i==0){
				isPrime = false;
				break;
			}
		}
		if(isPrime){
			cout<<num<<" is a prime num: "<<endl;
		}else{
			cout<<num<<" is not a prime Num:"<<endl;
		}
	}
	return 0;
}
