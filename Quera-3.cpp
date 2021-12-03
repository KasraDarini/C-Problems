#include <iostream>

using namespace std; 
void f(int a){
    for(int i=1; i<=a; i++){
        cout << a; 
    }
}
int main(){
    int n ; 
    cin >>n ;
    int n1 =n ;
    int len =0 ;
    while(n !=0 ){
        len ++ ;
        n /=10;   
    }
    int arr[len];
    for(int i=0 ; i<len ; i++){
        arr[i]= n1 % 10;
        n1/=10;
    }
    for(int i =len -1 ; i >=0; i--){
        cout <<arr[i] << ": ";
        f(arr[i]);
        cout <<"\n"; 
    }
}