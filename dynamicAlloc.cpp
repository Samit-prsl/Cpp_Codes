# include<bits/stdc++.h>
class DYNAMIC {
    private:
        int Row,Column;
        int **arr;
    public:
        DYNAMIC(int _Row,int _Column){
            Row = _Row;
            Column = _Column;
            arr = new int*[Row];
            for(int i=0;i<Row;i++){
                arr[i] = new int[Column];
            }
        }
        void Init(){
            for(int i=0;i<Row;i++){
                for(int j=0;j<Column;j++){
                    std::cout<<"Enter the value of Matrix elements at "<<i+1<<"and "<<j+1<<"position"<<std::endl;
                    std::cin>>arr[i][j];
                }
            }
        }
        void Print(){
            for(int i=0;i<Row;i++){
                for(int j=0;j<Column;j++){
                    std::cout<<arr[i][j]<<" ";
                }
                std::cout<<std::endl;
            }
        }
        ~DYNAMIC(){
            for(int i=0;i<Row;i++){
                delete [] arr[i];
            }
            delete [] arr;
            std::cout<<"Memory deallocated"<<std::endl;
        }
};

int main(){
    DYNAMIC D1(2,2);
    D1.Init();
    D1.Print();
    return 0;
}