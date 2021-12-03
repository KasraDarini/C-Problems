#include <iostream>
#include <cmath>
using namespace std; 

bool diehard(int a){
    bool isprime =true;
    while(a !=0){
        if(a ==1){
            isprime =false;
            return isprime; 
        }

        for(int i=2; i<=sqrt(a); i++){
            if(a % i ==0){
                isprime =false;
                return isprime;
            }
        }
        a/=10;
    }
    return isprime; 
}
void finddiehard(int a ,int b){
    for(int i =a; i<= b ;i++){
        if(diehard(i) ==true){
            cout << i<<endl ;
        }
    }
}
int main(){
    int n; 
    cin >> n ;
    int a =pow(10,n-1);
    int b = pow(10,n) -1;
    finddiehard(a,b);
}
//76of100