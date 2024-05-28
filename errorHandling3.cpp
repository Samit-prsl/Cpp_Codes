# include<bits/stdc++.h>
class Exp{
    private:
        std::string errMsg = "";
    public:
        Exp(std::string _errMsg){
            errMsg = _errMsg;
        }
        std::string showErr(){
            return errMsg;
        }
};

void ageValidation(int age){
   
    if(age < 18 || age > 60)
        throw Exp("The entered age is out of bounds");
    std::cout<<age<<std::endl;
}

int main(){
    std::cout<<"Enter age : "<<std::endl;
    int age;
    std::cin>>age;
    try{
        ageValidation(age);
    }
    catch(Exp& E){
        std::cout<<E.errMsg()<<std::endl;
    }
    return 0;
}