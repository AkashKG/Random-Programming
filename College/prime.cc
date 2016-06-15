#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num=7;
    while(num%2==0){
        num=num/2;
    }
    int i=2;
    for(i=2;i<sqrt(num);i++){
        if(!num%i){
            break;
        }
    }
    if(!num%i)
        cout<<"Not Prime";
    else
        cout<<"prime";
    return 0;
}
