#include <iostream>
using namespace std; 

void beautychecker(string &a, string &b){
    if(a[0] == b[b.length() -1]){
        cout << "YES";
    }
    else{
        cout << "NO"; 
    }
}
int main(){
    string str1;
    string str2;
    cin >> str1>> str2;
    beautychecker(str1,str2);
}
//easy
//100of100