# include<bits/stdc++.h>
class Test{
    private:
        int x,y;
    public:
        Test(){
            x = 1;
            y = 2;
        }
        friend void Display(){
            std::cout<<x<<y<<std::endl;
        }
};