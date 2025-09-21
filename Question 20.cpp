/* Develop a program that takes four numbers as input and
prints the largest among them.*/

#include<iostream>
using namespace std;

int main(){
		int a,b,c,d,larg;
		
		cout<<"Enter four num:";
		cin>>a>>b>>c>>d;
		
		larg = a;
		
		if(b > larg) larg = b;
		if(c > larg) larg = c;
		if(d > larg) larg = d;
		
		cout<<"The larges num is: " <<larg<<endl;
		
		return 0;
	}

