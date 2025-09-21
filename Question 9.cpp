///* Write a program to input three characters from the user and
//display characters with their corresponding ASCII codes */
//
//#include<iostream>
//using namespace std;
//
//int main(){
//	char a, b, c;
//	
//	cout<<"Enter three char:";
//	cin>>a>>b>>c;
//	
//	cout<<a<<int(a)<<" "<<endl;
//	cout<<b<<int(b)<<" "<<endl;
//	cout<<c<<int(c)<<" "<<endl;
//	
//	return 0;
//	
//}
/* WAP to take date as an input in below given format and
convert the date format and display the result as given
below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format – “Day – DD , Month – MM , Year – YYYY”
(Day – 27, Month – 07, Year – 2022) */

#include<iostream>
using namespace std;

int main() {
    int day, month, year;

    cout << "Enter date in DD/MM/YYYY format: ";
    char slash;
    cin>>day>>slash>>month>>slash>>year;

    cout <<"Day -"<<day<<",Month-"<<month<<",Year-"<<year<<endl;
    

    return 0;
}

