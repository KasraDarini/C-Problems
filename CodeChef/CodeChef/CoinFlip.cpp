#include <iostream>
using namespace std; 

int main(){
    int T; 
    cin >> T;
    int G =0;
    for(int i=1; i <=T; i++){
        cin >> G;
        for(int j =0; j< G; j++){ 
        int I{0} ;
        int N{0} ; 
        int Q{0} ;
        cin >> I ;
        cin >> N ;
        cin >> Q ;
        int T{0} ; 
        int H{0} ;
        if(N %2 ==0 ){
            T = N/2 ;
            H = N/2 ;
        }
         else if(I ==1 && N %2 !=0){
            H = N/2 ; 
            T = N - H ; 
        }
        else if(I==2 && N%2 !=0){
            T = N/2;
            H = N - T;
        }
        if(Q==1){
            cout << H << endl;
        }
        else{
            cout << T << endl ;
        }
    }
}
return 0 ;
}//Done