#include<iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    switch(n % 8){
        case 1:
            cout << "c" ;
            break ;
        case 2 :
            cout << "o";
            break ;
        case 3:
            cout <<"d";
            break ; 
        case 4:
            cout <<"e";
            break ;
        case 5:
           cout << "c";
           break ;
        case 6:
            cout <<"u";
            break ; 
        case 7:
           cout <<"p";
           break ;
        case 0:
            cout << "6";
            break; 
    }
}