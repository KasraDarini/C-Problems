#include <iostream>
using namespace std; 

bool ghyrmotefavet(string a, string b){
    bool res =true; 

    for(int i =0; i < a.length(); i++ ){
        for(int j =0 ; j < b.length() ; i++ ){
            if(a[i] !=b[j]){
                res= false; 
            }
        }
    }
    return res; 
}
bool barabar(string a, string b){
    int num = b.length(); 
    bool x; 
    for(int i=0 ; i < b.length() ; i++){
         x=true;  
        for(int j=0 ; j< a.length() ; j++){
            if(a[i] != b[j]){
                x=false; 
            }
        }
        if(!x){
            num --; 
        }
    }
    if (num == b.length()){
        return true; 
    }
    return false; 
}
int main(){
    int n ;
    cin >> n ; 
    string arr[n]; 
    string checker;
    cin >> checker; 
    for(int i=0; i< n ; i++){
        cin >>arr[i];  
    }
    for(int i =0; i < n ; i++){
        if(ghyrmotefavet(checker ,arr[i] ) && barabar(checker , arr[i])){
            cout <<"YES\n";
        }
        else{
            cout << "NO\n"; 
        }
    }
}