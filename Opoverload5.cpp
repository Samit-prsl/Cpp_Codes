# include<bits/stdc++.h>
class Distance{
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
        friend std::istream& operator>>(std::istream &input, Distance &D){
            std::cout<<"Enter feet and inches"<<std::endl;
            input >> D.feet >> D.inches;
            return input;
        }
        friend std::ostream& operator<<(std::ostream& output,Distance& D){
            output << D.feet << D.inches;
            return output;
        }
        Distance operator++(){
            inches++;
            if(inches==12){
                feet++;
                inches = 0;
            }
            return *this;
        }
        Distance operator++(int){
            Distance temp = *this;
            ++(*this);
            return temp;
        }
};

int main(){
    Distance D1;
    std::cin>>D1;
    std::cout<<D1;
    D1++;
    std::cout<<D1;
    return 0;
}