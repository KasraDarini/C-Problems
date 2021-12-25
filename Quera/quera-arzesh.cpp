#include <iostream>

using namespace std; 

int mainfunc(int n ){
    while(n !=0){
        if(n % 10 !=0){
            return n%10 ; 
        }
        n/=10 ; 
    }
    return 0 ; 
}
int fac(int a){
    int res =1;
    for(int i =1; i <= a ; i++){
        res*=i ; 
    }
    return res; 
}
int main(){
    int n ; 
    cin >> n ;
    cout <<mainfunc(fac(n));
}