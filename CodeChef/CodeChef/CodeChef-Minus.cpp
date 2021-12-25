#include <iostream>
using namespace std; 

int faker(int a, int b){
    int minus= a-b ;
    int lastdigit = minus %10; 
    if (lastdigit <9){
        minus ++ ;
    }
    else{
        minus --; 
    }
    return minus ;
}
int main(){
    int a,b ;
    cin >> a >>b;
    cout << faker(a,b);
}