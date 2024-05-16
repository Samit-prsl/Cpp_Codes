# include<bits/stdc++.h>
class Exception {
    protected:
        std::string errMsg;
    public:
        Exception(){
            errMsg = "The inputs are negative!";
        }
        std::string printErr(){
            return errMsg;
        }
};

double Average(int a,int b){
    if(a<0 || b<0){
        throw Exception();
    }
    else 
        return (a+b)/2;
}

int main(){
    std::cout<<"Enter two numbers : "<<std::endl;
    int a,b;
    std::cin>>a>>b;
    try{
        int ans = Average(a,b);
        std::cout<<ans<<std::endl;
    }catch(Exception& E){
        std::cerr<<E.printErr()<<std::endl;
    }
}