#include<iostream>
using namespace std; 

int main(){
    double hoursWorked{0};
    cout << "Enter the hours worked: "; 
    cin >> hoursWorked ; 
    while(hoursWorked != -1.00){
        double res; 
        res= (hoursWorked/10) +2.00 ; 
        cout << "hours you get: "<<res << endl ;
        cout << endl ;
        cout <<"Enter the hours worked: "; 
        cin >> hoursWorked ; 
    } 
    return 0;
}
