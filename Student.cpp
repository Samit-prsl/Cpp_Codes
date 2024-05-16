# include<bits/stdc++.h>
class Student{
    private:
        std::string Name;
        std::string Stream;
        int Roll;
        char Section;
    public:
        Student(){
            this->Name = "Test";
            this->Stream = "Test";
            this->Roll = 0;
            this->Section = 'Z';
        }
        Student(std::string _Name,std::string _Stream,int _Roll,char _Section){
           this->Name = _Name;
           this->Stream = _Stream;
           this->Roll = _Roll;
           this->Section = _Section;
        }
        void Print(){
            std::cout<<this->Name<<std::endl;
            std::cout<<this->Stream<<std::endl;
            std::cout<<this->Roll<<std::endl;
            std::cout<<this->Section<<std::endl;
        }
};

int main(){
    std::cout<<"Enter the number of students :"<<std::endl;
    int n;
    std::cin>>n;
    std::cin.ignore();
    Student *S = new Student[n];
    for(int i=0;i<n;i++){
            std::string _Name;
            std::cout<<"Enter Name : "<<std::endl;
            std::getline(std::cin,_Name);
            std::string _Stream;
            std::cout<<"Enter Stream : "<<std::endl;
            std::getline(std::cin,_Stream);
            int _Roll;
            std::cout<<"Enter Roll : "<<std::endl;
            std::cin>>_Roll;
            char _Section;
            std::cout<<"Enter Section : "<<std::endl;
            std::cin>>_Section;
            std::cin.ignore();
            S[i] = Student(_Name,_Stream,_Roll,_Section);
    }
    for(int i=0;i<n;i++){
            S[i].Print();
    }
    delete [] S;
    return 0;
}