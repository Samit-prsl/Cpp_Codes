# include<bits/stdc++.h>
class Arr{
    private:
        int size,*arr;
    public:
        Arr(int _n){
            this->size = _n;
            arr = new int[size];
        }
        friend std::istream& operator>>(std::istream& input,Arr& A){
            for(int i=0;i<A.size;i++){
                std::cout<<"Enter values of the Array"<<std::endl;
                input >> A.arr[i];
            }
            return input;
        }
        friend std::ostream& operator<<(std::ostream& output,const Arr& A){
            for(int i=0;i<A.size;i++){
                output << A.arr[i];
            }
            return output;
        }
        bool operator==(const Arr& A){
            for(int i=0;i<size;i++){
                if(arr[i]!=A.arr[i])
                    return false;
            }
            return true;
        }
};

int main(){
    Arr A1(5);
    Arr A2(5);
    std::cin>>A1;
    std::cin>>A2;
    std::cout<<A1;
    std::cout<<A2;
    std::cout<<(A1==A2)<<std::endl;
    return 0;
}