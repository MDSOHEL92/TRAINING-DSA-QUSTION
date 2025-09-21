/*Question 45 Tringle */

#include<iostream>
using namespace std;

int main() {
    int n = 6;

    for (int i = 1; i < n; i++) {
       for(int j=1;j<i+1;j++){
        cout<<"*"<<" ";
       }
       cout <<endl;   
    }
    return 0;
}
/*
* 
* * 
* * * 
* * * * 
* * * * * 
*/

