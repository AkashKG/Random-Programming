#include<iostream>
using namespace std;

int main(){
    int year=2000;
    if(!(year%4) && (year%100) || !(year%400)){
        cout<<"Leap";
    }
    else
        cout<<"Not Leap";
}
