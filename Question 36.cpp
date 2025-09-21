/* Write a program to check whether two given numbers
are co-prime numbers or not.*/

#include<iostream>
using namespace std;

int main(){
	int a,b,gcd = 1;
	
	cout<<"Enter two num: ";
	cin>> a>>b;
	
	for(int i=1; i<=min(a,b); i++){
		if(a % i == 0 && b % i == 0){
			gcd = i;
		}
	}
	if(gcd == 1){
		cout<<a<<"and"<<b<<"are Co-prime num:"<<endl;
	}else{
		cout<<a<<"and"<<b<<"are NOT Co-prime num: "<<endl;
	}
	return 0;
}
