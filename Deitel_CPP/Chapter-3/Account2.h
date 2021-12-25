#include<iostream>

class Account{
    private:
        int balance{0}; 
        std::string name;
    public:
        Account(std::string accountName, int initializedBalance)
            :name{accountName}{
                if(initializedBalance >0 ){
                    balance = initializedBalance ;
                }
            }
        void deposit(int depositAmount){
            if(depositAmount >0){
                balance +=depositAmount ;
            }
        }
        void withdraw(int withdrawAmount){
            if (balance >= withdrawAmount){
                balance -=withdrawAmount ;
            }
            else{
                std::cout << "Your balance is less then the withdrawal amount!";
            }
        }
        void setname(std::string accountName){
            name = accountName ; 
        }
        
        int getbalance()const{
            return balance ;
        }
        std::string getname()const{
            return name;
        }
        void display(){
            std::cout << "Your account balance is: "<< balance ;
            std::cout << "Your account name is: " << name ;
        }
};