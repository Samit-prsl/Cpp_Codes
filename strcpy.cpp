# include<bits/stdc++.h>

void xstrcpy(std::string x, std::string y){
    std::string Temp = "";
    Temp = x;
    x = y;
    y = Temp;
    std::cout<<"A = "<<x<<std::endl;
    std::cout<<"B = "<<y<<std::endl;
}

int main(){
    std::string A,B;
    std::cout<<"Enter two strings :"<<std::endl;
    std::cin>>A>>B;
    xstrcpy(A,B);
    return 0;
}