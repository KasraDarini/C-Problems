#include <iostream>
using namespace std ; 

int Z(int n){
    int cnt=0 ; 
    for(int i=5 ; n /i >=1 ; i *=5){
        cnt +=n/i ; 
    }
    return cnt; 
}
int main(){
    int length; 
    cin >> length;
    int arr[length];
    for(int i =0; i <length ; i++){
        cin >> arr[i];
    }
    for(int i=0  ; i< length ; i++ ){
         cout << Z(arr[i]) << "\n"; 
    }
}   