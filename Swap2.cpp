# include<bits/stdc++.h>

void Swap(int &a,int &b){
    if(a>b){
        int Temp = 0;
        Temp = a;
        a = b;
        b = Temp;
    }
    std::cout<<"A = "<<a<<std::endl;
    std::cout<<"B = "<<b<<std::endl;
}

int main(){
    int x = 10;
    int y = 5;
    Swap(y,x);
    return 0;
}