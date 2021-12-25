#include<iostream>

class Date{
    private:
        int month ; 
        int day; 
        int year;
    public :
        bool ismonth(int m){
            return (m >=1 && m<=12);
        }
        Date(int y , int m, int d)
            :year{y}{
                day =d; 
                if(ismonth(m)){
                    month= m; 
                }
            }
        void setmonth(int m){
            if(ismonth(m)){
                month = m ;
            }
        }
        void setyear(int ye){
            year =year ;
        }
        void setday(int d){
            day = d;
        }
        int getday()const{
            return day;
        }
        int getyear()const{
            return year; 
        }
        int getmonth(){
            return month ;
        }
        void Display(){
            std::cout <<year <<"\\" << month << "\\" << day <<std::endl;
            if(month == 9 && day ==30){
                std::cout << "This is SHABE YALDA !!!!!!!!!!"; 
            }
        }
};