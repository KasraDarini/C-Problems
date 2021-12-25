#include <iostream>
#include "Account2.h"
using namespace std; 

int main(){
    Account myAccount{"Kasra Darini" , 20000000} ; 
    cout << "Your name is :" << myAccount.getname() << endl << "You Balance is: " << myAccount.getbalance()<<endl;
    cout << "Do you want to Deposit, Withdraw or none?(D/W)";
    string dorw ;
    cin >> dorw; 
    while(dorw !="D" && dorw !="W"){
        cin >> dorw; 
    } 
    if(dorw == "D"){
        int depositAmount ;
        cout << "Enter your deposit amount: ";
        cin >> depositAmount ;
        myAccount.deposit(depositAmount);
    }
    else if(dorw=="W"){
        cout << "Enter your withdrawal amount:"; 
        int withdrawalAmount ;
        cin >> withdrawalAmount ;
        myAccount.withdraw(withdrawalAmount);
    }
    cout << "You Balance Changed to "<<myAccount.getbalance()<<endl ;
}