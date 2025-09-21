/* Write a program that takes a start year and an end year
from the user and prints all the leap years in that range.*/

#include<iostream>
using namespace std;

int main(){
	 int sYear, eYear;
	 
	 cout<<"Enter start year: ";
	 cin>>sYear;
	 
	 cout<<"Enter end year: ";
	 cin>>eYear;
	 
	 cout<<"Leap years b/w "<<sYear<<" and "<<eYear<<"are:\n";
	 
	 for(int year = sYear; year <= eYear; year++){
	 	
	 	if((year % 4 == 0 && year % 100 != 0) || (year % 400) == 0){
	 		cout<<year<<" ";
		    }
	    }
	    cout<<endl;
	    return 0;
	}
