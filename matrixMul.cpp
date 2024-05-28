# include<bits/stdc++.h>
class Matrix{
    int r,c,**arr;
    public:
        Matrix(int _r,int _c){
            this->r = _r;
            this->c = _c;
            arr = new int*[r];
            for(int i=0;i<r;i++){
                arr[i] = new int[c];
            }
        }
        void Init(){
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    std::cout<<"Enter value for "<<i+1<<"th row and "<<j+1<<"th column"<<std::endl;
                    std::cin>>arr[i][j];
                }
            }
        }
        void Print(){
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    std::cout<<arr[i][j]<<" ";
                }
                std::cout<<std::endl;
            }
        }
        Matrix operator*(const Matrix& M){
            Matrix temp(r,M.c);
            for(int i=0;i<r;i++){
                for(int j=0;j<M.c;j++){
                    temp.arr[i][j] = 0;
                    for(int k=0;k<M.r;k++){
                        temp.arr[i][j] += arr[i][k] * M.arr[k][j];
                    }
                }
            }
            return temp;
        }
};

int main(){
    std::cout<<"Enter row and column of 1st matrix"<<std::endl;
    int r1,c1;
    std::cin>>r1>>c1;
     std::cout<<"Enter row and column of 2nd matrix"<<std::endl;
    int r2,c2;
    std::cin>>r2>>c2;
    if(c1 != r2){
        std::cout<<"Matrix multiplication not possible"<<std::endl;
        return -1;
    }
    Matrix M1(r1,c1);
    Matrix M2(r2,c2);
    M1.Init();
    M1.Print();
    M2.Init();
    M2.Print();

    Matrix res = M1 * M2;
    res.Print();
    return 0;
}