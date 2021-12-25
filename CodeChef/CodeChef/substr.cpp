#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;


long long solve(string str , int n){
    long long zcnt=0;
    for(int i=0; i < n; i++){
        if(str[i] =='1'){
            zcnt ++; 
        }
    }
    return (zcnt * (zcnt+1) /2);
}
int main(){
    int t{0};
    cin >> t;
    while(t > 0){
        int n ;
        cin >> n ;
        string str;
        cin >> str;
        cout << solve(str,n) << endl;
        t--; 
    }
    
    return 0 ;//Done
}