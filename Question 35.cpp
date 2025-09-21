/* Write a program to calculate HCF of two numbers.*/

#include<iostream>
using namespace std;

int main(){
	int a,b,hcf;
	
	cout<<"Enter two num: ";
	cin>>a>>b;
	
	int smaller=(a<b) ? a : b;
	
	for(int i=1; i<=smaller; i++){
		if(a % i==0 && b % i==0){
			hcf = i;
		}	
	}
	cout<<"HCF = "<<hcf<<endl;
	
	return 0;
}
