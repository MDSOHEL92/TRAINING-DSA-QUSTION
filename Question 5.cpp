/* Write a program to ask user about the cost price and selling
price banana per dozen. Calculate the profit or loss earned
upon selling 25 bananas.
 */
 #include<iostream>
 using namespace std;
 
 int main() {
    float cpDozen, spDozen;  
    float cp25, sp25;

    cout << "Enter cost price per dozen bananas: ";
    cin >> cpDozen;

    cout << "Enter selling price per dozen bananas: ";
    cin >> spDozen;


    cp25 = (cpDozen / 12) * 25;
    sp25 = (spDozen / 12) * 25;

    if (sp25 > cp25) {
        cout << "Profit = " << sp25 - cp25 << endl;
    } 
    else if (cp25 > sp25) {
        cout << "Loss = " << cp25 - sp25 << endl;
    } 
    else {
        cout << "No Profit, No Loss" << endl;
    }

    return 0;
}
