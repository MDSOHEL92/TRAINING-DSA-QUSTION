/* . Write a program to calculate volume of a cuboid.*/
#include<iostream>
using namespace std;

int main(){
	float length, width, height, volume;
	
	cout<<" Enter length of the cuboid: ";
	cin >> length;
	
	cout<<" Enter Width of the cuboid: ";
	cin >> width;
	
	cout<<" Enter height of the cuboid: ";
	cin >> height;
	
	volume = length*width*height;
	
	cout<<"The volume of thecuboid is: "<< volume<<endl;
	
	return 0;
}
