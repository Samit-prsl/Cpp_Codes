# include<bits/stdc++.h>
class WingedAnimals {
    protected:
        int WingSpan;
    public:
        WingedAnimals(int _WingSpan){
            WingSpan = _WingSpan;
        }
        void Print(){
            std::cout<<WingSpan<<std::endl;
        }
};

class Mammals {
    protected:
        int Legs;
    public:
        Mammals(int _Legs){
            Legs = _Legs;
        }
        void Print(){
            std::cout<<Legs<<std::endl;
        }
};

class Bats : public WingedAnimals,public Mammals {
    public:
        Bats(int _WingSpan,int _Legs):WingedAnimals(_WingSpan),Mammals(_Legs){}
        void PrintAll(){
            WingedAnimals :: Print();
            Mammals :: Print();
        }
};

int main(){
    Bats* B = new Bats(23,4);
    B->PrintAll();
    return 0;
}