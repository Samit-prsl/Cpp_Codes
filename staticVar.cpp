# include<bits/stdc++.h>
class STATIC{
    public:
        static int Count;
        static int Showcount();
        STATIC(){
            std::cout<<"Constructor Called"<<std::endl;
            Count++;
        }
        ~STATIC(){
            std::cout<<"Destructor Called"<<std::endl;
            Count--;
        }
};

int STATIC::Count = 0;
int STATIC::Showcount() {
   return Count;
}

int main(){
    std::cout<<"Enter the number of objects to be created"<<std::endl;
    int n;
    std::cin>>n;
    STATIC *S = new STATIC[n];
    std::cout<<STATIC::Showcount()<<std::endl;
    return 0;
}