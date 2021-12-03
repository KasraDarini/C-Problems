#include <iostream>
using namespace std; 
void stringrev(string a){
    string a1[a.length()]  ; 
    for(int i=0 ; i < a.length() ; i++ ) {
       cout << a[a.length() -i -1];          
    }
}
int main(){ 
    string a; 
    cin >> a; 
    stringrev(a);
}