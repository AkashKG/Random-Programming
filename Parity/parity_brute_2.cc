#include<iostream>
using namespace std;

class BruteParity{
    long int number;
    short s_bit;
public:
    BruteParity(long int number);
    void computeParity();
    short getParity();
    ~BruteParity(){
        cout<<"Deleted";
    }
};

BruteParity::BruteParity(long int number){
    this->number = number;
    this->s_bit = 0;
}

void BruteParity::computeParity(){
    while(number){
        s_bit ^= 1;
        number = number & (number - 1);
    }
}

short BruteParity::getParity(){
    return s_bit;
}

int main(){
    BruteParity *B = new BruteParity(1023);
    B->computeParity();
    cout<<B->getParity();
    delete B;
    return 0;
}

