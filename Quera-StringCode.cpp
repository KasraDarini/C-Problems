#include <iostream>
using namespace std; 

string lastindexchanger(string &str){
    for(int i= str.length()-1 ; i>= 1; i-- ){
        char temp = str[i];
        str[i] = str[i-1];
        str[i-1] = temp ; 
    }
    return str;
}
string increasechar(string &str){
    for(int i =0 ; i<str.length() ; i++){
        if(str[i] !='z'){
            str[i] ++;
        }
        else{
            str[i] = 'a';
        }
    }
    return str; 
}
int main(){
    int n ; 
    int k ; 
    string str;
    cin >> n >> k >> str; 
    for(int i=1; i <= k ; i++ ){
        lastindexchanger(str);
        increasechar(str);
    }
    cout << str;
}
//100of100