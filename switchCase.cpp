# include<bits/stdc++.h>

int main() {
    int ch,x,y;
    std::cout<<"Enter two numbers"<<std::endl;
    std::cin>>x>>y;
    std::cout<<"Enter Choice for mathematical operations"<<std::endl;
    std::cin>>ch;
    int res = 0;
    switch(ch){
        case 1 : res = x + y;
        break;
        case 2 : res = x - y;
        break;
        case 3 : res = x * y;
        break;
        case 4 : res = x / y;
        break;
        default : std::cout<<"Invalid choice"<<std::endl;
    }
    std::cout<<res<<std::endl;
    return 0;
}