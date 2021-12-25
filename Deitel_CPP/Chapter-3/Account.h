class myTest{
    private:
        int balance{0};
        std::string name;
        std::string melliCode; 
    public:

        void setbalance(int num ){
            balance = num ; 
        }
        int getbalance(){
            return balance ; 
        }
        void setname(std::string string1){
            name = string1 ;
        }
        std::string getname(){
            return name; 
        }
        void setcode(std::string Code){
            melliCode = Code; 
        }
        std::string getcode(){
            return melliCode;
        }
        void TheLetter(){
            std::cout <<"Hello "<<name<<"we hope you enjoy your time being here";
        }
};