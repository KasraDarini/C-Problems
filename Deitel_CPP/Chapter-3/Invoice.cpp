#include<iostream>
#include <string>
#include "Invoice.h"
using namespace std;

int main(){
    Invoice myTest{" ", " " ,3,10};
    cout<< "Your pnum is: "<< myTest.getpnum()<< endl << "Your timeDescrip is: "<< myTest.gettimeDescrip()<<endl;
    cout << "Your Product Quantity is: "<<myTest.getQuantity()<< endl<< "Your Price Per Item is: "<< myTest.getpricePerItem();
    cout <<endl <<"Invoice Amount is: "<< myTest.getInvoiceAmount(); 
    string pnum ;
    cout << "Enter Your Part Number: "; cin >> pnum ;
    string timedec;
    cout << "Enter Your Time description: "; cin >> timedec; 
    int quantity ;
    cout << "Enter your Qunatity by number: "; cin >> quantity ;
    int ppi ;
    cout << "Enter your Price Per Item: "; cin >> ppi ;
    double vat; 
    cout << "Enter the value-added tax: "; cin >> vat; 
    double disrate;
    cout << "Enter the Discount Rate: "; cin >> disrate ;
    myTest.setpartNum(pnum);
    myTest.setTimeDes(timedec);
    myTest.setQuantity(quantity); 
    myTest.setpricePeritem(ppi);
    myTest.setvat(vat);
    myTest.setdis(disrate);
    cout << "The Invoice Amount is changed to: " << myTest.getInvoiceAmount(); //DONE
}