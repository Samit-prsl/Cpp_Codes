# include<bits/stdc++.h>
class Time {
    private:
        int min,hr;
    public:
        Time(int Min,int Hr){
            this->min = Min;
            this->hr = Hr;
        }
        void Print(){
            std::cout<<hr<<" : "<<min<<std::endl;
        }
        friend std::istream& operator>>(std::istream& input,Time& T){
            std::cout<<"Enter mins and hrs"<<std::endl;
            input >> T.min >> T.hr;
            return input;
        }
        friend std::ostream& operator<<(std::ostream& output,const Time& T){
            output << T.min << T.hr;
            return output;
        }
        Time operator++(){
            min++;
            if(min==60){
                hr++;
                min = 0;
            }
            return *this;
        }
        Time operator++(int){
            Time temp = *this;
            ++(*this);
            return temp;
        }
};

int main(){
    Time *T1 = new Time(59,10);
    T1->Print();
    (++(*T1)).Print();
    return 0;
}