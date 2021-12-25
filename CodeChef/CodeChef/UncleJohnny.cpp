#include <bits/stdc++.h>
using namespace std ;  

int main(){
    int T ;
    int n ; 
    int k ;
    cin >> T ;
    int arr1[T];
    for(int j=0;j <T;j++){
        cin >> n ;
        int arr[n]; 
        for(int i =0 ; i < n ; i++){
            cin >> arr[i];
        }
        cin >> k ;
        int s= arr[k-1]; 
        sort(arr,arr+n);
        for(int i=0 ; i<n ; i++){
            if(arr[i] == s){
                arr1[j] = i+1 ;
                break ;
            }
        }

    }
    for(int i =0 ; i <T ; i++ ){
        cout << arr1[i]<<" ";
    }
}