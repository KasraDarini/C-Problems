#include <iostream>
using namespace std; 

int main(){
    string arr[8]; 
    for(int i =0 ;i< 8 ; i++){
        cin >> arr[i] ;
    }
    int cntL =0 ;
    int cntR=0 ;  
    for(int i =0 ; i <8; i++){
        if(arr[i] == "R"){
            cntR ++ ; 
        }
        if(arr[i] == "L"){
            cntL++; 
        }
    }
    if(cntR > cntL){
        for(int i =0 ; i< 7 ; i++){
            if(arr[i] == "R"){
                cout << arr[i-1];
                break ;
            }
        }
    }
    else{
        for(int i =7 ; i> 0 ; i--){
            if(arr[i] == "L"){
                cout << arr[i-1];
                break ;
            }
        }
    }
}