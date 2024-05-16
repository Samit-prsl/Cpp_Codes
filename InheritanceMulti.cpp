# include<bits/stdc++.h>
class Person {
    protected:
        std::string Name;
        int Age;
    public:
        Person(std::string _Name,int _Age){
            this->Name = _Name;
            this->Age = _Age;
        }
        virtual void Printdetails() = 0;
};

class Employee : public Person {
    protected:
        int Eid,Sal;
    public:
        Employee(std::string _Name,int _Age,int _Eid,int _Sal):Person(_Name,_Age){
            Eid = _Eid;
            Sal = _Sal;
        }
        void Printdetails(){
            std::cout<<Name<<std::endl;
            std::cout<<Age<<std::endl;
            std::cout<<Eid<<std::endl;
            std::cout<<Sal<<std::endl;
        }
};

class Manager : public Person {
    protected:
        int Mid,Sal;
    public:
        Manager(std::string _Name,int _Age,int _Mid,int _Sal) : Person(_Name,_Age) {
            Mid = _Mid;
            Sal = _Sal;
        }
        void Printdetails(){
            std::cout<<Name<<std::endl;
            std::cout<<Age<<std::endl;
            std::cout<<Mid<<std::endl;
            std::cout<<Sal<<std::endl;
        }
};

int main(){
    Employee* E1 = new Employee("Test",25,1,1000);
    Manager* M1 = new Manager("Man",24,2,2000);
    E1->Printdetails();
    M1->Printdetails();
    delete E1;
    delete M1;
    return 0;
}