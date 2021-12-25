#include <bits/stdc++.h>
#include <string>
#include "Account.h"
using namespace std; 

int main(){
    myTest account ;
    cout << "Your account name is: "<< account.getname() <<endl;
    cout << "Your account balance is: "<< account.getbalance() << endl;
    cout << "Your National Code is: "<< account.getcode() << endl ;
    string name;
    cout << "Set your name: " ; getline(cin ,name) ; account.setname(name);
    string codemelli ;
    cout << "Set your National Code: " ; cin>>codemelli; account.setcode(codemelli);
    int balance;
    cout <<"Set your balance: " ; cin >> balance; account.setbalance(balance); 
    cout <<"\n";
    cout << "Your account name is: "<< account.getname() <<endl;
    cout << "Your account balance is: "<< account.getbalance() << endl;
    cout << "Your National Code is: "<< account.getcode() << endl ;
    account.TheLetter();
}