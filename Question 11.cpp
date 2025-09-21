/*  Write a program to input three characters from the user
and display characters with their corresponding ASCII
codes. */
#include<iostream>
using namespace std;

int main(){
	char a,b,c;
	
	cout<<"Enter three char:";
	cin>>a>>b>>c;
	
	cout<<a<<" = "<<int(a)<<endl;
	cout<<b<<" = "<<int(b)<<endl;
	cout<<c<<" = "<<int(c)<<endl;
	
	return 0;
}
