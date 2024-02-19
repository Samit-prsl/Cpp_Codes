# include<bits/stdc++.h>
class CAESER {
    
  std::string plainText="";
  std::string cipherText="";
  
  void getCipherFromPlain(std::string _plainText) {
      for(char &ch : _plainText) {
          ch = std::toupper(ch);
      }
      int length = _plainText.length();
      for(int i=0;i<length;i++) {
          int ch = _plainText.at(i);
          int cipherCh = ((ch-65) + 3) % 26;
          char chCipher = cipherCh + 65; 
          cipherText = cipherText + chCipher;
      }
    }
    
  void getPlainFromCipher(std::string _cipherText) {
      for(char &ch : _cipherText){
          ch = std::toupper(ch);
      }
      int length = _cipherText.length();
      for(int i=0;i<length;i++) {
          int ch = _cipherText.at(i);
          int plainText = ((ch-65)-3) % 26;
          char textInPlain = plainText + 65;
          std::cout<<textInPlain;
          plainText = plainText + textInPlain;
      }
  }
        public:
        
            void setPlainText(std::string _plainText) {
                plainText = _plainText;
                getCipherFromPlain(plainText);
            }
            void setCipherText(std::string _cipherText) {
                cipherText = _cipherText;
                getPlainFromCipher(_cipherText);
            }
            void Display() {
                std::cout<<plainText<<std::endl;
                std::cout<<cipherText<<std::endl;
            }
};

int main() {
    //CAESER c1;
    //c1.setPlainText("asdfg");
    //c1.Display();
    //c1.setCipherText("DVGIJ");
    //c1.Display();
    
    return 0;
}