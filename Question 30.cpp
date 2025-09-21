/*Write a program to calculate LCM of two numbers */

#include<iostream>
using namespace std;

int main(){
	int a, b, lcm;
	cout<< " Enter two num: ";
	cin>> a >> b;
	
	int maxNum = (a>b) ? a:b; // large two num
	
	while(true){
		if(maxNum % a==0 && maxNum % b==0){
			lcm = maxNum;
			break;
		}
		maxNum++;
	}
	cout<< "LCM of "<<a<<"and"<<b<<"is :"<<lcm<<endl;
	return 0;
}
