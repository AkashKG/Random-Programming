#include<iostream>
using namespace std;
#define MAX 50

void printString(int num){
    char str[MAX];
    int i=0;
    while(num>0){
        int rem = num%26;
        if(rem == 0){
            str[i++]='Z';
            num = num/26 - 1;
        }
        else{
            str[i++]=(rem-1)+'A';
            num=num/26;
        }
    }
    str[i]='\0';
    cout<<str<<"\n";
}

int main(){
    printString(105);
    printString(702);
}
