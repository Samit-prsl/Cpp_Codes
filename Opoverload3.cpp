# include<bits/stdc++.h>
class Array{
    protected:
        int *arr;
        int size;
    public:
        Array(int *_arr,int _size){
            size = _size;
            arr = new int[size];
            for(int i=0;i<size;i++){
                arr[i] = _arr[i];
            }
        }
        ~Array(){
            delete [] arr;
        }
        void Print(){
             for(int i=0;i<size;i++){
                std::cout<<arr[i]<<" ";
            }
            std::cout<<std::endl;
        }
        bool operator==(const Array& A){
            bool isEqual = false;
            for(int i=0;i<size;i++){
                if(A.arr[i]==arr[i]){
                    isEqual = true;
                }
                else{
                    isEqual = false;
                    break;
                }  
            }
            return isEqual;
        }
};

int main(){
    int A[] = {1,2,3,4};
    int B[] = {1,3,3,4};
    Array A1(A,4);
    Array A2(B,4);
    A1.Print();
    A2.Print();
    bool Ans = A1 == A2;
    std::cout<<Ans;
}