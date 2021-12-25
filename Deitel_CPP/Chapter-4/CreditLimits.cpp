#include<iostream>
using namespace std; 

int main(){
    int accountNum = 0 ; 
    double mainBalance{0}; 
    double creditLimit{0}; 
    double totalCredits{0};
    double totalCharges{0};
    cout << "Enter account number (or -1 to quit): ";
    cin >> accountNum ;
    while(accountNum !=-1){
        cout << "Enter beginning balance: ";
        cin >> mainBalance ;
        cout << "Enter total charges: " ;
        cin >> totalCharges ;
        cout << "Enter total Credit: " ; 
        cin >> totalCredits;
        cout << "Enter total credit limits: " ;
        cin >> creditLimit ;
        double newBalance = mainBalance + totalCharges - totalCredits;
        if(newBalance <= creditLimit){
            cout <<"New Balance is "<< newBalance ;
        } 
        else{
            cout << "New balance is "<<newBalance<<endl;
            cout<<"Account      : "<<accountNum<<endl ;
            cout <<"Credit limit: " << creditLimit <<endl; 
            cout <<"Balance     : "<<newBalance <<endl;
            cout << "Credit Limit Exceeded" ;
        }
        cout << "Enter account number (or -1 to quit): " ;
        cin >> accountNum;
    }
    return 0 ;//Done
}