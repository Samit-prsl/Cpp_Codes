# include<bits/stdc++.h>
class B;
class A{
    private:
        int X,Y;
    public:
        A(int x,int y){
            this->X = x;
            this->Y = y;
        }
        friend class B;
        void lookAtB(const B& b){
            std::cout<<b.X<<b.Y<<std::endl;
        }
};

class B {
    private:
        int X,Y;
    public:
        B(int x,int y){
            this->X = x;
            this->Y = y;
        }
        friend class A;
        void lookAtA(const A& a){
            std::cout<<a.X<<a.Y<<std::endl;
        }
};

int main(){
    A a1(6,7);
    B b1(8,9);
    a1.lookAtB(b1);
    b1.lookAtA(a1);
    return 0;
}