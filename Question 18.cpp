/* Write a program that takes three numbers as input and
finds the middle (second largest) number */
/* Middle number wahi hai jo dono ke beech me ho.

(a > b && a < c) || (a < b && a > c) ? a is middle

(b > a && b < c) || (b < a && b > c) ? b is middle

Otherwise ? c is middle  */

#include<iostream>
using namespace std;

int main(){
	int a,b,c,middle;
	
	cout<<"Enter three num:";
	cin>>a>>b>>c;
	
	if((a > b && a < c)|| (a < b && a > c))
	middle = a;
	
	else if((b > a && b < c)|| (b < a && b > c))
	middle = b;
	
	else
	    middle = c;
	    
	    cout<<"The middle num is:"<<middle<<endl;
	    return 0;
}
