#include<iostream>
#include "Date.h"
using namespace std;
int main(){
    Date date{0,1 ,0}; 
    date.Display(); 
    int year, month ,day ;
    cout << "Enter the Year: " ;
    cin>> year; 
    cout << endl<<"Enter the Month: " ;
    cin >> month ;
    cout <<endl <<"Enter the Day: " ;
    cin >> day ; 
    date.setyear(year);
    date.setmonth(month);
    date.setday(day);
    date.Display();
}