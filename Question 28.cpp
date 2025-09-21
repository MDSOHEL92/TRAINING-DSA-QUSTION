/* Write a program to count digits in a given number*/

#include<iostream>
using namespace std;

int main(){
	int num, count = 0;
	
	cout<< "Enter a num: ";
	cin>> num;
	
	if(num < 0){
		num = -num;
	}
	if(num == 0){
		count = 1;
	}else{
		while(num > 0){
			num = num / 10;
			count++;
		}
	}
	cout<<"Total digits = "<< count;
	return 0;
}
