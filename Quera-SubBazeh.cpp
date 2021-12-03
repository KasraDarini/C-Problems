#include <iostream>
using namespace std; 

int f(int arr[] , int l , int n ){
    int sum =0 ; 
    for(int i =l ; i <= n ; i++ ){
        sum +=arr[i] ;
    }
    return sum ; 
}
int main(){
    int n; 
    cin >> n ;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i]; 
    }
    int sum =0; 
    for(int i =0 ;i < n ;i ++ ){
        for(int j =0 ; j< n ; j++){
            sum += f(arr , i , j);
        }
    }
    cout << sum;
    //20of100 :( 
}