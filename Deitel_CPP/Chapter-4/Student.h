#include <bits/stdc++.h> 

class Student{
    private:
        std::string name; 
        int average ; 
    public: 
        Student(std::string Name , int avg)
            :name(Name){
                if (validAverage(avg)){
                    average = avg ; 
                }
            }
        bool validAverage(int avg){
            return (avg >0 && avg <=100) ; 
        }
        void setname(std::string studentname){
            name= studentname ;
        }
        void setavg(int avg){
            if(validAverage(avg)){
                average =avg ;
            }
        }
        std::string getname() const{
            return name; 
        }
        int getavg() const{
            return average;
        }
        void getLetterGrade(){
            if(average >=90){
                std::cout << "A";
            }
            else if(average >=70){
                std::cout <<"B";
            }
            else if(average >=60){
                std::cout << "C";
            }
            else {
                std::cout<<"F";
            }
        }
};