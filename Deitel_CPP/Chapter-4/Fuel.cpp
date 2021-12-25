#include <iostream>
using namespace std; 
int main(){
    unsigned int Kdriven{0}; 
    unsigned int Lit{0};
    unsigned totallit{0}; 
    unsigned totalkilometr{0};
    cout<< "Enter Kilometers driven or -1 to quit: ";
    cin >> Kdriven ;
    while(Kdriven !=-1){
        cout << "Enter liters used: " ;
        cin >> Lit; 
        double res{0};
        res = static_cast<double>(Kdriven) / static_cast<double>(Lit); 
        cout <<"Kilometer per Liter is : "<< res<<endl; 
        totalkilometr += Kdriven ;
        totallit += Lit ;
        double total = static_cast<double>(totalkilometr) / static_cast<double>(totallit); 
        cout <<"Total kms per liter: "<< total<<endl ;
        cout<< "Enter Kilometers driven or -1 to quit: ";
        cin >> Kdriven ;
    }
    return 0 ; 
}