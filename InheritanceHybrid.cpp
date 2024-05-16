# include<bits/stdc++.h>
class Cricketer{
    protected:
        std::string Name;
        int Age;
    public:
        Cricketer(std::string _Name,int _Age){
            this->Name = _Name;
            this->Age = _Age;
        }
        virtual void Print(){
            std::cout<<Name<<std::endl;
            std::cout<<Age<<std::endl;
        }
};

class Batter : virtual public Cricketer{
    protected:
        int Runs;
    public:
        Batter(std::string _Name,int _Age,int _Runs):Cricketer(_Name,_Age){
            this->Runs = _Runs;
        }
        void Print() override {
            // std::cout<<Name<<std::endl;
            // std::cout<<Age<<std::endl;
            Cricketer :: Print();
            std::cout<<Runs<<std::endl;
        }
};

class Bowler :virtual public Cricketer {
    protected:
        int Wickets;
    public:
        Bowler(std::string _Name,int _Age,int _Wickets):Cricketer(_Name,_Age){
            this->Wickets = _Wickets;
        }
        void Print() override {
            // std::cout<<Name<<std::endl;
            // std::cout<<Age<<std::endl;
            Cricketer :: Print();
            std::cout<<Wickets<<std::endl;
        }
};

class Allrounder : public Batter,public Bowler{
    protected:
        int Rating;
    public:
        Allrounder(std::string _Name,int _Age,int _Runs,int _Wickets,int _Rating):Batter(_Name,_Age,_Runs),Bowler(_Name,_Age,_Wickets),Cricketer(_Name,_Age){
            this->Rating = _Rating;
        }
        void Print() override {
            Batter :: Print();
            std::cout<<Wickets<<std::endl;
            std::cout<<Rating<<std::endl;
        }
};

int main(){
    Allrounder A("Ben stokes",32,6000,230,4);
    Batter Bat("Virat Kohli",36,15410);
    Bowler Bowl("Jasprit Bumrah",28,300);
    Cricketer *C1 = &A;
    C1->Print();
    Cricketer *C2 = &Bat;
    C2->Print();
    Cricketer *C3 = &Bowl;
    C3->Print();
    // delete C1;
    // delete C2;
    // delete C3;
    return 0;
}

