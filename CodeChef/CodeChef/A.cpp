#include <iosteam> 
using namespace std; 

int main(){
    int max =0 ; 
    int num ; 
    cin >> num; 
    for(int i =1; i<=10 ; i ++ ){
        if (num % i ==0 ){
            max = i ;
        }
    }
    cout << max; 
}