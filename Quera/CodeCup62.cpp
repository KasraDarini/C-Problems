#include <iostream>
using namespace std; 

int main(){
    int t; 
    cin >> t; 
    for(int i =1; i <= t; i++ ){
        int n ;
        cin >> n ;
        int amount; 
        cin >> amount;
        int bill ; 
        cin >> bill ;
        int totalAmount = amount -bill ; 
        if (totalAmount % n ==0 && totalAmount / n > 0 ){
            cout <<(totalAmount / n) <<endl;
        } 
        else{
            cout << -1<<endl;
        }
    }
    return 0 ;
}