#include<iostream>
using namespace std;

int main(){
    int num = 9999;

    int sum=0;

    while(num>0){
        sum=sum+num%10;
        num=num/10;
        if(num==0){
            if(sum>9){ num=sum; sum=0;}
        }
    }
    cout<<sum;
}
