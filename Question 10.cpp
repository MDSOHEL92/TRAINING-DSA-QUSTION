/* WAP to take time as an input in below given format and
convert the time format and display the result as given
below.
User Input date format – “HH:MM */

#include<iostream>
using namespace std;

int main(){
	int hr, min;
	char store; 
	
	cout<<" Enter time in HH:MM :";
	cin>>hr>>store>>min;
	
	cout<<"hr :- "<<hr<<", min :- "<<min<<endl;
	
	return 0;
	
}
