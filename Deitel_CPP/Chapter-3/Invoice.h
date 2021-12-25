#include<iostream>

class Invoice{
    private:
        std::string partNum; 
        std::string timeDescrip ; 
        int quantity ;
        int pricePerItem ;
        double vat =0.2; 
        double discountRate = 0.2;
    public:
        Invoice(std::string partNumber,std::string timeDescription, int Quantity, int Priceperitem )
            :partNum{partNumber}{
                timeDescrip= timeDescription;
                if(Quantity >=0){
                    quantity=Quantity ;
                }
                if(Priceperitem >=0){
                    pricePerItem = Priceperitem ;
                }
            }
        double getInvoiceAmount()const{
            double x = (quantity * pricePerItem) ;
            x *=1+(vat) ; 
            x -=(discountRate)*(x); 
            return x; 
        }
        void setpartNum(std::string S){
            partNum = S ;
        }
        void setTimeDes(std::string S){
            timeDescrip = S ;
        }
        void setpricePeritem(int x){
            if(x >= 0){
                pricePerItem  =x ;
            }
        }
        void setQuantity(int q){
            if(q >=0 ){
                quantity = q ;
            }
        }
        void setvat(double v){
            if(v >=0){
                vat= v; 
            }
        }
        void setdis(double disrate){
            if(disrate >=0 ){
                discountRate = disrate;
            }
        }
        std::string getpnum()const{
            return partNum ;
        }
        std::string gettimeDescrip() const{
            return timeDescrip ;
        }
        int getQuantity()const{
            return quantity ;
        }
        int getpricePerItem()const{
            return pricePerItem ;
        }
        double getVat()const{
            return vat; 
        }
        double getDiscountRate()const{
            return discountRate; 
        }
};