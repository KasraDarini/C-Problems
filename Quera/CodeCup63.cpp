#include <iostream>
#include<string>
using namespace std; 

string getsimilar(string a, string b){
    string res="";
    for(int i =0 ;i < a.length() ; i++ ){
        for(int j=0 ; j < a.length() ; j ++ ){
            if(a[i] == b[j]){
                 res.push_back(a[i]);
            }
        }
    }
    return res; 
}
int main(){
    int n ; 
    cin >> n;
    int k; 
    cin >> k ;
    string arr[n];
    for(int i =0 ; i < n ; i++ ){
        cin >> arr[i]; 
    } 
    string res ="";
    for(int i =0 ; i < n ; i ++ ){
        for(int j =0 ; j < n ; j++){
            res += getsimilar(arr[i] , arr[j]);
        }
    }
    cout << res;
}