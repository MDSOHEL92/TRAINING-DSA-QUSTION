/*Question 47*/

#include <iostream>
using namespace std;

int main() {
    int n = 6;
  
    for (int i = 1; i < n+2; i++) {
        char ch='A';
       for(int j=1;j<i-1;j++){
        cout<<ch<<" ";
        ch =ch+1; 
         }
       cout <<endl;
    }
    return 0;
}
/*
A
A B
A B C
A B C D
A B C D E
*/

