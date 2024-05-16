# include<bits/stdc++.h>
class Area{
    int x,y;
    public:
        Area(int _x,int _y){
            x = _x;
            y = _y;
            std::cout<<"Area = "<<x*y<<std::endl;
        }
        Area(int _x){
            x = _x;
            std::cout<<"Area = "<<x*x<<std::endl;
        }
};

int main(){
    Area A1(4,5);
    Area A2(3);
    return 0;
}