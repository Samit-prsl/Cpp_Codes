# include<bits/stdc++.h>

void Swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
    std::cout<<"X = "<<a<<std::endl;
    std::cout<<"Y = "<<b<<std::endl;
}

int main(){
   int x = 2;
   int y = 3;
   Swap(x,y);
   return 0;
}