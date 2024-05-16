# include<bits/stdc++.h>
class Employee{
    std::string Name;
    std::string Department;
    std::string Designation;
    int Eid;
    int Sal;
    public:
        Employee(std::string _Name,std::string _Department,std::string _Designation,int _Eid,int _Sal){
            this->Name = _Name;
            this->Department = _Department;
            this->Designation = _Designation;
            this->Eid = _Eid;
            this->Sal = _Sal;
        }
        void showDetails(){
            std::cout<<Name<<std::endl;
            std::cout<<Department<<std::endl;
            std::cout<<Designation<<std::endl;
            std::cout<<Eid<<std::endl;
            std::cout<<Sal<<std::endl;
        }
        friend class Hod;
        friend void setId(Employee& E);
};

class Hod{
    std::string Name;
    std::string Department;
    int Eid;
    int Sal;
    public:
        Hod(std::string _Name,std::string _Department,int _Eid,int _Sal){
            this->Name = _Name;
            this->Department = _Department;
            this->Eid = _Eid;
            this->Sal = _Sal;
        }
        void showDetails(){
            std::cout<<Name<<std::endl;
            std::cout<<Department<<std::endl;
            std::cout<<Eid<<std::endl;
            std::cout<<Sal<<std::endl;
        }
        void enhanceSal(Employee& E){
            E.Sal = E.Sal + 1000;
        }
};

void setId(Employee& E){
    E.Eid = E.Eid + E.Sal;
}

int main(){
    Employee E1("E1","Elec","Inspector",1,2000);
    Hod H1("H1","Elec",1,12000);
    E1.showDetails();
    H1.showDetails();
    H1.enhanceSal(E1);
    setId(E1);
    E1.showDetails();
    return 0;
}