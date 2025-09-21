/* Develop a program that takes a student's score (0-100) as
input and prints the corresponding grade (e.g., A, B, C, D, F)
based on a grading scale.*/
/*
90–100 ? A

80–89 ? B

70–79 ? C

60–69 ? D

Below 60 ? F
*/

#include<iostream>
using namespace std;

int main(){
	int score;
	cout<<"Enter studen's score:";
	cin>>score;
	
	if(score >= 90)
	    cout<<" Grade A:" <<endl;
	
    else if(score >= 80)
	    cout<<"Grade: B" <<endl;
	   
    else if(score >= 70)
	    cout<<"Grade: C"<<endl;
	
	else if(score >= 60)
	    cout<<"Grade: D"<<endl;
	
	else
	   cout<<"Grade: F" <<endl;
	   
	   return 0;               
}
