/*Write a program to calculate sum of first N even natural
numbers*/
#include<iostream>
using namespace std;

int main(){
	int n, sum =0;
	
	cout<<"Enter n: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		sum += 2 * i; // even num are 2 4 6
	}
	
	cout<<"Sum of first "<< n <<" Even natural num = "<<sum<<endl;
	
	return 0;
}
