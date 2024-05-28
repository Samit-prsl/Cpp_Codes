# include<bits/stdc++.h>
class A{
    private:
        int X,Y;
    public:
        A(int x,int y){
            this->X = x;
            this->Y = y;
        }
        void Print(){
            std::cout<<X<<Y<<std::endl;
        }
        friend void lookAtA(const A& A);

};
class B{
    private:
        int X,Y;
    public:
        B(int x,int y){
            this->X = x;
            this->Y = y;
        }
        void Print(){
            std::cout<<X<<Y<<std::endl;
        }
        friend void lookAtB(const B& b);
};

void lookAtA(const A& a){
    std::cout<<a.X<<a.Y<<std::endl;
}

void lookAtB(const B& b){
    std::cout<<b.X<<b.Y<<std::endl;
}

int main(){
    A a1(4,5);
    B b1(6,7);
    lookAtA(a1);
    lookAtB(b1);
    return 0;
}