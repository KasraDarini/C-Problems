#include <iostream>
using namespace std; 

void checker(string a, string b , string c , string d){
    if (a==d || b==c){
        cout << "YES";
    } 
    else if(a==b||c==d){
        cout << "YES" ; 
    }
    else{
        cout <<"NO";
    }
    
}
int main(){
    string a,b,c,d; 
    cin >> a>>b >>c >> d; 
    checker(a,b,c,d);
}
//100of100