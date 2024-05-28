# include<bits/stdc++.h>
namespace devSpace {
    template<class Type>
    class Arr {
        public:
            Type *arr;
            int size;
        public:
            Arr(int _size){
                this->size = _size;
                arr = new Type[size];
            }
            friend std::istream& operator>>(std::istream& input,Arr<Type>& A){
                for(int i=0;i<A.size;i++){
                    std::cout<<"Enter elements at index "<<i<<std::endl;
                    input >> A.arr[i];
                }
                return input;
            }
            friend std::ostream& operator<<(std::ostream& output,Arr<Type>& A){
                for(int i=0;i<A.size;i++){
                    output << A.arr[i] << " ";
                }
                output<<std::endl;
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
}

int main(){
    devSpace::Arr<double> A1(5);
    std::cin>>A1;
    std::cout<<A1;
    devSpace :: Arr<double> A2(5);
    std::cin>>A2;
    std::cout<<A2;
    return 0;
}