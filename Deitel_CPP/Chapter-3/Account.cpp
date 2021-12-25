#include <bits/stdc++.h>
using namespace std;
class Account{
    private:
        std::string name;
    public :
        explicit Account(std::string accountName)      
            :name{accountName}{//initialize accountname to the name;
                //empty body
            }
        void setname(std::string accountName){
            name = accountName;
        }
        std::string getname()const{
            return name;
        }
};
int main(){
    Account acc{"Empty"};
    cout << "your name is "<< acc.getname()<< endl;
    string name; 
    getline(cin , name);
    acc.setname(name);
    cout << "Your name is changed to "<< acc.getname(); 
}