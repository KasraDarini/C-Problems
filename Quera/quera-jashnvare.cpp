#include <iostream>
#include <list> 
#include <iterator>
using namespace std; 

int main (){
    int n ,x; 
    cin >> n >> x ; 
    int arr[n];
    for(int i=0 ;i <n ; i++){
        cin >> arr[n] ;
    } 
    list <int> list1; 
    for(int i =0 ; i < n ; i++ ){
        for(int j =i+1;j< n ; j ++ ){
            if (arr[j] + arr[i] <= x ){
                  list1.push_back(arr[i]);
                  break ;
            }
        }

    }   
    for(int i =0 ; i < n ; i++ ){
        for(int j =i+1;j< n ; j ++ ){
            if (arr[j] + arr[i] <= x ){ 
                  list1.push_front(arr[j]);
            }
        }

    } 
         
    cout << n - cnt+1; 
}