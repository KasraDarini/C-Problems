#include <iostream>
using namespace std; 
int goodnum(int n){
    int res =0 ; 
    for(int i=1 ; i <=n ; i++){
        res += i ;
    }
    return res;    
}
int main(){
    int k ;
    cin >> k;
    int a=0 ; 
    int i = 1;
    while(a < k){
        a =0 ;
        for(int j =1; j<=goodnum(i); j++ ){
            if(goodnum(i) % j ==0){
                a ++ ;
            }
        }
        i++;
    }
    cout << goodnum(i-1);
    return 0 ; 
}