# include<bits/stdc++.h>
class A{
    private:
        int a;
    public:
        A(int x){
            this -> a = x;
        }
        void show(){
            std::cout<<a<<std::endl;
        }
        A* operator->(){
            return this;
        }
};

int main(){
    A *a1 = new A(5);
    a1->show();
    return 0;
}