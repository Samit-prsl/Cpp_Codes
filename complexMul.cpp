# include<bits/stdc++.h>
class Complex {
    int r,i;
    public:
        Complex(int _r,int _i){
            r = _r;
            i = _i;
        }
        void Print(){
            std::cout<<r<<" + i "<<i<<std::endl;
        }
        Complex operator*(const Complex& C){
            int real = (r*C.r) - (i*C.i);
            int imaginary = (r*C.i) + (i*C.r);
            return Complex(real,imaginary);
        }
};

int main(){
    Complex C1(1,1);
    C1.Print();
    Complex C2(2,2);
    C2.Print();
    Complex ans = C1*C2;
    ans.Print();
}