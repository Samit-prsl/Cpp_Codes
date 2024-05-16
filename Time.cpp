# include<bits/stdc++.h>
class Time{
    int hh,mm;
    public:
        Time(int _hh,int _mm){
            hh = _hh;
            mm = _mm;
        }
        void Print(){
            std::cout<<"Hours : "<<hh<<"Minutes : "<<mm<<std::endl;
        }
        void operator++(int x){
            
        }
};