# include<bits/stdc++.h>
class Palindrome {
    std::string A;
    public:
        Palindrome(std::string _A){
            A = _A;
        }
        bool checkPalindrome(){
            int length = A.length();
            std::string reverseA = "";
            for(int i=length-1;i>=0;i--){
                reverseA = reverseA + A.at(i);
            }
            if(reverseA == A)
                return true;
            else
                return false;
        }
        void Print(){
            std::cout<<A<<std::endl;
        }
};

int main(){
    Palindrome P("Test");
    std::cout<<P.checkPalindrome()<<std::endl;
    return 0;
}