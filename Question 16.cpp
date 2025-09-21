/* Develop a program that converts a temperature from
Fahrenheit to Celsius or vice versa based on user input. The
user should specify the type of conversion.
 */
 #include<iostream>
 using namespace std;
 
 int main(){
 	char choice;
 	double temp, converted;
 	
 	cout<<"Enter temperature vlaue: ";
 	cin>>temp;
 	
 	cout<<"Enter conversion type:";
 	cin>>choice;
 	
 	if(choice == 'C' || choice == 'c'){
 		//F to C
 		converted = (temp - 32) * 5 / 9;
 		cout<<temp<<"Fahrnheit = "<<converted<<"Celsius"<<endl;
	 }
	 else if(choice == 'F' || choice =='f'){
	 	// C to F
	 	converted = (temp * 9 / 5) + 32;
	 	cout<<temp<<"Celsius ="<<converted<<"Fahrenheit"<<endl;
	    }
		else{
			cout<<"Invalid !";
		}
		return 0;
 }
