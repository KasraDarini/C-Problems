#include <iostream>
#include <cmath>
using namespace std;

int specialarraylength(int n){
    int sum =0 ;
    for(int i =1 ; i <= n-1 ;  i++ ){
        sum += i ; 
    }
    return sum ;
}
int smallestint(int arr[] , int n){
    int min = arr[0] ; 
    for(int i=0 ; i< n ; i ++){
        if(arr[i] < min){
            min = arr[i] ;
        } 
  }
  return min ;
}
int main(){
    int T{0} ;
    cin >> T ;
    int n{0}; 
    for(int i=0 ; i< T ; i++){
        cin >> n ;
        int arr[n]; 
        for(int j =0 ; j < n ; j ++){
            cin >> arr[j]; 
        }
        int arr1[specialarraylength(n)] ;
        for(int j=0 ; j < n ; j++){
            for(int l=j+1; l <n ; l++){
                arr1[l +j-1] = abs(arr[j] - arr[l]);
            }
        } 
        cout << smallestint(arr1 , specialarraylength(n)) << endl; 
    }
}