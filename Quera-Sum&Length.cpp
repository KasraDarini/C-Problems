#include <iostream>
#include <cmath>
using namespace std;

int sumEL(int a){
    int sum =0 ; 
    while(a !=0 ){
        sum +=a%10 ; 
        a /=10; 
    }
    return sum; 
}
int main (){
    int m, s; 
    cin >> m >> s; 
    int res1=0 ;
    for(int i = pow(10,m-1) ; i < pow(10,m) ; i++){
        if(sumEL(i) == s){
            res1 =i;
            break;    
        }
    }
    int res2=0 ;
    for(int i=pow(10,m)-1; i >= pow(10,m-1) ; i--){
        if(sumEL(i) == s){
            res2 =i ; 
            break ;  
        }
    }
    if(res1 ==0 ){
            res1--; 
            res2 --; 
    }
    cout << res1 << " "<< res2 ; 
    return 0;
}
//80%