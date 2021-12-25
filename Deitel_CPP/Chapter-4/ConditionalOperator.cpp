#include <iostream>
using namespace std;
int main(){
    int a ,b ;
    cin >> a >>b ;
    //Conditional Operator
    cout << (a>b?"a is max" : "a is not max") << endl ;
    (b > a ? cout << "b is max" : cout  << "b is not max") ; 
    //done
}