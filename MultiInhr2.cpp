# include<bits/stdc++.h>
class A{
    protected:
        int X,Y;
    public:
        A(int x,int y){
            this->X = x;
            this->Y = y;
        }
        void display(){
            std::cout<<X<<" "<<Y<<std::endl;
        }
};

class B{
    protected:
        int P,Q;
    public:
        B(int p,int q){
            this->P = p;
            this->Q = q;
        }
        void display(){
            std::cout<<P<<" "<<Q<<std::endl;
        }
};

class ans : public virtual A,public virtual B{
    protected:
        int Ans;
    public:
        ans(int x,int y,int p,int q):A(x,y),B(p,y){
            Ans = 0;
        }
        void Print(){
            A :: display();
            B :: display();
        }
        int Sum(){
            Ans = A::X + A::Y + B::P + B::Q;
            return Ans;
        }

};

int main(){
    ans *a = new ans(1,2,3,4);
    a->Print();
    a->A::display();
    std::cout<<a->Sum()<<std::endl;
}