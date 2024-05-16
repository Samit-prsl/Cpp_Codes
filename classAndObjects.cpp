# include<bits/stdc++.h>
class Car {
    private:
        std::string Model;
        int Mileage;
    public:
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
    Car C1("Test",87);
    C1.Print();
    Car *C2 = new Car("Test2",67);
    C2->Print();
    return 0;
}