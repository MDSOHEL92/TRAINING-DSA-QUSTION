/* Write a program to calculate simple interest */
#include<iostream>
using namespace std;

int main(){
	float principal, rate, time, simpleInterest;
	
	cout<<"Enter principal:";
	cin>> principal;
	
	cout<<"Enter Rate of Interest:";
	cin>> rate;
	
	cout<<" Enter Time(in year):";
	cin>> time;
	
	simpleInterest = (principal*rate*time)/100; // formula
	
	cout<<" Simple Interest :"<<simpleInterest<<endl;
	
	return 0;
}
