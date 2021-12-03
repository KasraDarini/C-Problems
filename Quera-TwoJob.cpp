#include <iostream>
using namespace std; 

string f(string &str){
    if(str == "shanbe" || str == "doshanbe" || str=="chaharshanbe"){
        return "perspolis"; 
    }
    else if(str =="yekshanbe" || str == "seshanbe" ||str == "panjshanbe"){
        return "bahman";
    }
    return "tatil";
}
int main(){
    string str; 
    cin >> str; 
    cout << f(str);
}
//100of100