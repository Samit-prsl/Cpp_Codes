# include<bits/stdc++.h>
class Car {
    private:
        std::string Model;
        int Mileage;
    public:
        Car(){
            this->Model = "Test";
            this->Mileage = 0;
        }
        Car(std::string _Model,int _Mileage){
            this->Model = _Model;
            this->Mileage = _Mileage;
        }
        void Print(){
            std::cout<<Model<<std::endl;
            std::cout<<Mileage<<std::endl;
        }
};

int main() {
    std::cout<<"Enter number of cars to be input : "<<std::endl;
    int n;
    std::cin>>n;
    Car *C = new Car[n];
    for(int i=0;i<n;i++){
        std::string _Model;
        int _Mileage;
        std::cout<<"Enter Model name and Mileage"<<std::endl;
        std::cin>>_Model>>_Mileage;
        C[i] = Car(_Model,_Mileage);
    }
    for(int i=0;i<n;i++){
        C[i].Print();
    }
    delete [] C;
    return 0;
}