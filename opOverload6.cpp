# include<bits/stdc++.h>
class Distance {
    private:
        int feet,inches;
    public:
        Distance(){
            feet = 0;
            inches = 0;
        }
        Distance(int _feet,int _inches){
            this->feet = _feet;
            this->inches = _inches;
        }
        friend std::istream& operator>>(std::istream& input,Distance& D){
            std::cout<<"Enter feet and inches"<<std::endl;
            input >> D.feet >> D.inches;
            return input;
        }
        //  friend std::istream& operator>>(std::istream &input, Distance &D){
        //     std::cout<<"Enter feet and inches"<<std::endl;
        //     input >> D.feet >> D.inches;
        //     return input;
        // }
        friend std::ostream& operator<<(std::ostream& output,const Distance& D){
            output << D.feet <<" "<< D.inches ;
            return output;
        }
        Distance operator()(int a,int b){
            Distance D;
            D.feet = a;
            D.inches = b;
            return D;
        }
};

int main(){
    Distance D1;
    std::cin>>D1;
    Distance D2 = D1(3,6);
    std::cout<<D2;
    return 0;
}