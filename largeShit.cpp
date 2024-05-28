# include<bits/stdc++.h>
namespace devSpace {
    template<class Type>
    class Arr {
        private:
            Type *arr;
            int size;
        public:
            Arr(int _size){
                this->size = _size;//size = _size
                arr = new Type[size];
            }
            friend void operator>>(std::istream& input,Arr<Type>& A){
                for(int i=0;i<A.size;i++){
                    std::cout<<"Enter elements at index "<<i<<std::endl;
                    input >> A.arr[i];
                }
            }
            friend void operator<<(std::ostream& output,Arr<Type>& A){
                for(int i=0;i<A.size;i++){
                    output << A.arr[i] << " ";
                }
                output<<std::endl;
            }
            bool operator==(const Arr<Type>& A){
                for(int i=0;i<size;i++){
                    if(arr[i]!=A.arr[i])
                        return false;
                }
                return true;
            }
    };

    class Exp{
        private:
            std::string errMsg = "";
        public:
            Exp(){
                errMsg = "array out of bound";
            }
            std::string showErr() const {
                return errMsg;
            }
    };
}

void sizeValidation(int size){
    if(size > 5)
        throw devSpace::Exp();
}

int main(){
    std::cout<<"Enter size of array 1"<<std::endl;
    int size1;
    std::cin>>size1;
    try{
        sizeValidation(size1);
        devSpace::Arr<double> A1(size1);
        std::cin>>A1;
        std::cout<<A1;
    }
    catch(const devSpace::Exp& E){
        std::string printMsg = E.showErr();
        std::cout<<printMsg<<std::endl;
    }
    
    return 0;
}