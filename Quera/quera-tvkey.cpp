#include <iostream>

using namespace std ; 
int main(){
    int n ;
    int x ;  
    int k ; 
    cin >> n >> x >> k;
    string arr[n] ;  
    for(int i =0 ; i< n ; i++ ){
        cin >> arr[i];
    }
    string res =""; 
    int cnt =0 ; 
    for(int i =x-1,cnt =0 ; cnt <= k ; cnt++,i++ ){
        if(i == sizeof(arr)/sizeof(arr[0])){
            i =0 ;
        }
        res= arr[i] ;
    }
    cout << res;
}