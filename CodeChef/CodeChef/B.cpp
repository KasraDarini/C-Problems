#include <iostream>
using namespace std;
long foutcnt(long a){
    long fcnt=0 ; 
    while(a !=0){
        if(a%10 == 4){
            fcnt++;
        }
        a/=10;
    }
    return fcnt; 
}
int main(){
    int t{0}; 
    cin >> t; 
    int i =1; 
    long num ;
    while(i <= t){
        cin >> num ; 
        cout << foutcnt(num) << endl ;
        ++ i ;
    }
    return 0 ;
}