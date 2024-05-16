# include<bits/stdc++.h>
class Matrix {
    protected:
        int r,c;
        int **arr;
    public:
        Matrix(int _r,int _c){
            r = _r;
            c = _c;
            arr = new int*[r];
            for(int i=0;i<r;i++){
                arr[i] = new int[c];
            }
        }
        void Inz(){
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    std::cout<<"Enter matrix elements for "<<i<<" row and "<<j<<" column"<<std::endl;
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
    std::cout<<"Enter row and column for da matrix :"<<std::endl;
    int r,c;
    std::cin>>r>>c;
    Matrix M1(r,c);
    M1.Inz();
    M1.Print();
    std::cout<<"Enter row and column for da matrix :"<<std::endl;
    int r2,c2;
    std::cin>>r2>>c2;
    Matrix M2(r2,c2);
    M2.Inz();
    M2.Print();
    Matrix ans = M1 * M2;
    ans.Print();
    return 0;
}