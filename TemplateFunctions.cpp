# include<bits/stdc++.h>
namespace MySpace {
    template<class Type>
    class Data {
        protected:
            Type *arr;
            int Size;
        public:
            Data(Type *_arr,int _Size){
                Size = _Size;
                arr = new Type[Size];
                for(int i=0;i<Size;i++){
                    arr[i] = _arr[i];
                }
            }
            ~Data(){
                delete [] arr;
            }
            void PrintAll(){
                for(int i=0;i<Size;i++){
                    std::cout<<arr[i]<<" ";
                }
                std::cout<<std::endl;
            }
            void bubbleSort(){
                for(int i=0;i<Size-1;i++){
                    for(int j=0;j<Size-i-1;j++){
                        Type temp;
                        if(arr[j]>arr[j+1]){
                            temp = arr[j];
                            arr[j] = arr[j+1];
                            arr[j+1] = temp;
                        }
                    }
                }
            }
    };
}

int main(){
    //using namespace MySpace;
    double arr[] = {4.4,3.3,2.2,1.1};
    int Size = sizeof(arr)/sizeof(arr[0]);
    MySpace :: Data<double> D1(arr,Size);
    D1.PrintAll();
    D1.bubbleSort();
    D1.PrintAll();
    return 0;
}