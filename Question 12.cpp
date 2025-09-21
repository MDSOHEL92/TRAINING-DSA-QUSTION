/* Create a program that takes a person's age as input and
classifies them into different age groups (e.g., child,
teenager, adult, senior).*/

#include<iostream>
using namespace std;

int main(){
	int age;
	cout<<"Enter your age:";
	cin>>age;
	
	if(age < 13){ ///????????
		cout<<"You are child:"<<endl;
	}
	
	else if(age >= 13 &&  age <= 19){
		cout<<"You are Teenager:"<<endl;
	}
	
	else if(age >= 20 && age <= 59){
		cout<<"You are Adult:"<<endl;
	}else{
		cout<<"You are senior:"<<endl;
	}
	
	return 0;
}
