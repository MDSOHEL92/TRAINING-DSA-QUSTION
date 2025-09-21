/*  Write a program to input an ASCII code from the user and
print its corresponding character. */
 
 #include<iostream>
 using namespace std;
 
 int main(){
 	int ascii;
 	cout<<"Enter an ASCII code:";
 	cin>> ascii;
 	
 	char ch = char(ascii);
 	cout<< "The character for ASCII code"<<ascii<<"is"<<ch <<endl;
 	
 	return 0;
 }
