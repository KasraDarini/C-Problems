#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int cnt =0;
    int grade =0 ; 
    int total =0 ;
    cout << "Enter the grade or -1 to stop :" ;
    cin >> grade ;
    while(grade !=-1){
        total += grade; 
        cnt++ ;
        cout << "Enter the grade or -1 to stop :" ;
        cin >> grade; 

    }
    double avg{0.00};
    if(total !=0 ){
         avg = (static_cast<double>(total)) / cnt; 
    }
    cout <<setprecision(2) << fixed  ;
    cout << "average is "<<avg <<" from " << cnt << " grades";
}
