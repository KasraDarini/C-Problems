#include <iostream>
#include "Student.h"
using namespace std; 

int main(){
    Student myStudent("No name specified", 1);
    cout << myStudent.getname();
    cout << endl << myStudent.getavg() <<endl;
    string name ;
    cout << "Set your name: " ; 
    getline(cin , name); 
    myStudent.setname(name);
    int avg; 
    cout << "Set your average: ";
    cin >> avg ;
    myStudent.setavg(avg);
    cout << "Your name is: "<<name<<endl; 
    cout << "Your average is: "<< avg<<endl ;
    myStudent.getLetterGrade() ;
}