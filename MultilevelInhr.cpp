# include<bits/stdc++.h>
class A{
    protected:
        int X,Y;
    public:
        A(int x,int y){
            this->X = x;
            this->Y = y;
        }
        virtual void display() const {
            std::cout<<X<<" "<<Y<<std::endl;
        }
};

class B : public A{
    protected:
        int sqX,sqY;
    public:
        B(int x,int y) : A(x,y){
            sqX = X*X;
            sqY = Y*Y;
        }
        void display() const override {
            std::cout<<sqX<<" "<<sqY<<std::endl;
        }
};

class C : public B{
    protected:
        int sumOfSquares;
    public:
        C(int x,int y):B(x,y){
            sumOfSquares = 0;
        }
        int Sum() const {
            sumOfSquares = sqX + sqY;
            return sumOfSquares;
        }
        void display() const override {
            int ans = Sum();
            std::cout<<ans<<std::endl;
        }
};

int main(){
    B *b1 = new B(3,4);
    b1->display();
    C *c1 = new C(3,4);
    c1->Sum();
    c1->display();
    delete c1;
    delete b1;
    return 0;
}