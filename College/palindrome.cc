#include<iostream>
using namespace std;

int main(){
    int num=989;
    int dup=num;
    int rev=0;
    while(dup>0){
        rev=rev*10+dup%10;
        dup/=10;
    }
    if(num==rev){
        cout<<"Palin";
    }
    else
        cout<<"Not Palin";
    return 0;
}
