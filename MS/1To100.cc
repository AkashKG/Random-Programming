#include<iostream>
using namespace std;

class OneTo100{
public:
    static int i;
    OneTo100(){
        i++;
        cout<<i<<" ";
    }

};

int OneTo100::i=0;

int main(){
    OneTo100 a[100];
    return 0;
}
