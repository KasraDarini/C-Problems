#include<bits/stdc++.h> 

class MotorVehicle{
    private:
        std::string make; 
        std::string fuelType; 
        int yearOfManufacture=1400;
        std::string color;
        int engineCapacity=2100; 
    public :
        MotorVehicle(std::string Make, std::string FuelType , std::string Clr)
            :make{Make}{
                fuelType = FuelType;
                color = Clr;
            }
        void setmake(std::string Make){
            make =Make;
        }
        void setfueltype(std::string Ftype){
            fuelType = Ftype ;
        }
        void setyear(int yr){
            yearOfManufacture = yr ;
        }
        void setcolor(std::string CLR){
            color = CLR ;
        }
        void setENGINE(int engcap){
            engineCapacity = engcap ;
        }
        std::string getmake()const{
            return make; 
        }
        std::string getFuelType()const{
            return fuelType ;
        }
        std::string getcolor()const{
            return color ;
        }
        int getYear()const{
            return yearOfManufacture ;
        }
        int getEngineCpacity()const{
            return engineCapacity ;
        }
        void DisplayCar(){
            std::cout << "Your Car Make is: "<< make; 
            std::cout <<std:: endl << "Your Car Fuel Type is: "<< fuelType ;
            std::cout <<std:: endl<< "Your Car Color is: " << color ; 
            std:: cout <<std:: endl << "Your Car Year of Manufacture is: "<< yearOfManufacture;
            std::cout << std::endl << "Your car Engine Capacity is: "<< engineCapacity ; 
        }
};