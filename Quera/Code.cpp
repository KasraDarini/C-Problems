#include <iostream>
using namespace std ; 

int sum(int a){
    int sum =0 ;
    while(a !=0){
        sum += a%10 ;
        a/=10 ;
    }
    return sum ;
}
int main(){
    int cnt=0 ;
    for(int i= 100000000 ; i<=999999999 ;i++ ){
        if (sum (i) %2==0 ){
                cnt++;
        }
    }
    cout << cnt;
}