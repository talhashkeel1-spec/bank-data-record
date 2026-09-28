#include <iostream>
#include <string>
using namespace std;

class Atm_Data{

private:
    int pin=1234;
    string iban;
    int cvc;
public:
    string bankName;
    string username;
    int pins;

    Atm_Data(int pins,string iban,int cvc,string bankName,string username){
      this->pins=pins;
      this->cvc=cvc;
      this->iban=iban;
      this->username=username;
      this->bankName=bankName;

    }
    void getdata(){
        cout<<"your pin is = "<<pin<<endl;
        cout<<"your iban is = "<<iban<<endl;
        cout<<"your cvc is = " <<cvc<<endl;

    }
    void getpin(){
        if(pins==pin){
            cout<< "access granted";
        }
        else {
            cout<<"your pin is not corrected";
        }
    };

};
int main(){
    Atm_Data user1(12334,"Pk24342",423,"Allied bank","M.talha");
  //  user1.getdata();
    user1.getpin();
    return 0;
    
};