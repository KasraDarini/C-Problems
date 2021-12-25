#include<iostream>
#include <iomanip> 
using namespace std;

int main(){
    int cnt{0};
    unsigned int pass{0};
    unsigned int fail{0};
    int grade=0;
    while(cnt!=10){
        cout<<"1 or 2: ";
        cin >> grade;
        (grade==1)?pass++: pass+0;
        (grade ==2)? fail++: fail+0;
        cnt++;
    }
    cout<<"passed:"<<pass<<endl;
    cout <<"failed:"<<fail;
}