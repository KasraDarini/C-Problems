#include <iostream>
using namespace std; 

int main(){
    int a,b ;
    string a1="";
    cin >> a>> b ;
    if(b >=1 && b <=10){
        a1 = "Right "; 
    }
    if (b >10 && b <=20){
        a1="Left "; 
    }
    cout << a1; 
    cout << 10-a+1 <<" ";
    if(a1== "Left "){
        cout << 20 -b+1;
    }
    else{
        cout << b;
    }
    
}