# include<bits/stdc++.h>
class Time{
    private:
        int min,hrs;
    public:
        Time(){
            min = 0;
            hrs = 0;
        }
        Time(int _min,int _hrs){
            this->min = _min;
            this->hrs = _hrs;
        }
        friend std::istream& operator>>(std::istream& input, Time& T){
            std::cout<<"Enter Hrs and Mins"<<std::endl;
            input >> T.hrs >> T.min;
            return input;
        }
        friend std::ostream& operator<<(std::ostream& output,Time& T){
            output << T.hrs << T.min;
            return output;
        }
        Time operator++(){
            min++;
            if(min==60){
                hrs++;
                min = 0;
            }
            return *this;
        }
        Time operator++(int){
            Time temp = *this;
            ++(*this);
            return temp;
        }
        bool operator==(const Time& T){
            if(hrs == T.hrs && min == T.min)
                return true;
            else
                return false;
        }
};

int main(){
    Time t1(59,10);
    Time t2(0,11);
    std::cin>>t1;
    std::cin>>t2;
    Time t3 = ++t1;
    std::cout<<t3<<" "<<t1;
    std::cout<<(t1==t2)<<std::endl;
    return 0;
}