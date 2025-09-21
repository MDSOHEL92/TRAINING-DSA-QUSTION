/* Write a program to calculate sum of squares of first N
natural numbers */

#include<iostream>
using namespace std;

int main(){
	int n, sum = 0;
	
	cout<<" Enter n : ";
	cin >> n;
	
	for(int i=1; i<=n; i++){
		sum += i * i; // logic 
	}
	
	cout<<"Sum of squares of first "<<n<<" natural num "<<sum<<endl;
	
	return 0;
}
