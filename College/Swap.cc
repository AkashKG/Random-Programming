//Swapping to variable without using third
#include<iostream>
using namespace std;

int main(){
    int a=5, b=6;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b;
    return 0;
}
