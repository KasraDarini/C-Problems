#include <iostream>
using namespace std;

int main(){
   /* int sum {0};
    unsigned int grade{0};  
    int cnt =0 ;
    while(cnt < 10 ){
        ++cnt; 
        cin >> grade ; 
        sum += grade; 
    }
    cout << sum /10 ;*/
    int sum {0} ;
    unsigned int cnt{1};
    unsigned int classMembers{0};
    cin >> classMembers; 
    while(cnt <= classMembers){
        unsigned int grade ;
        cout << "Enter the "<<cnt<<"th student grade: ";
        cin >> grade; 
        sum +=grade;  
        ++cnt;
    }  
    cout << sum / classMembers;
}