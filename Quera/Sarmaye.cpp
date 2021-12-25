#include <iostream>
using namespace std; 

int main(){
    int a{0}; 
    cin >>a ;
    int arr[a]; 
    for(int i =0 ; i < a; i ++){
        cin >> arr[i]; 
    }
    int cnt =0 ;
    for(int i =0 ; i < a ; i++ ){
        for(int  j=i+1; j < a ; j++){
            if((arr[j] + arr[i]) < (arr[i] - arr[j]) || (arr[j] +arr[i]) < (arr[j]-arr[i] )){
                cnt ++ ;
            }
        }       
    }
    cout << cnt ;
}