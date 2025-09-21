/* Write a program to calculate circumference of a circle */

#include<iostream>
using namespace std;

int main(){
	float redius, circumference;
	const float PI = 3.14159;
	
	cout<<"Enter the redius of the circle";
	cin>>redius;
	
	circumference = 2*PI*redius; // foumula
	
	cout<<"The circumference is : "<< circumference<<endl;
	
	return 0;
}

