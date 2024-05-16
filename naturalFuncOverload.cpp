# include<bits/stdc++.h>

int addNatural(int a, int b){
    int sum = 0;
    for(int i=a;i<=b;i++){
        sum = sum +i;
    }
    return sum;
}

int addNatural(int a){
    return a + 1;
}

int main(){
    std::cout<<addNatural(1,10)<<std::endl;
    std::cout<<addNatural(3)<<std::endl;
    return 0;
}