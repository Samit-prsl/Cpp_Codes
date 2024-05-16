# include<bits/stdc++.h>
class Exception {
    protected:
        std::string errMsgForA, errMsgForD;
    public:
        Exception(){
            errMsgForA = "A is 0, roots are imaginary";
            errMsgForD = "D is less than 0, roots are imaginary";
        }
        std::string errA(){
            return errMsgForA;
        }
        std::string errD(){
            return errMsgForD;
        }
};

void getRoots(int a,int b,int c){
    double D = (b*b)-4*a*c;
    if(a==0||D<0){
        throw Exception();
    }
    double Roots[2];
    Roots[0] = (-b + std::sqrt(D))/(2*a);
    Roots[1] = (-b - std::sqrt(D))/(2*a);
    for(int i=0;i<2;i++){
        std::cout<<Roots[i]<<std::endl;
    }
    std::cout<<std::endl;
}

int main(){
    std::cout<<"Enter values of a,b,c"<<std::endl;
    int a,b,c;
    std::cin>>a>>b>>c;
    try{
        getRoots(a,b,c);
    }catch(Exception& E){
        if(a==0)
            std::cerr<<E.errA()<<std::endl;
        else
            std::cerr<<E.errD()<<std::endl;
    }
}