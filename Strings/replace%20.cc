/*
Write a method to replace all spaces in a string with'%20'.
The string has sufficient space at the end of the string to hold the additional
*characters, and that you are given the "true" length of the string. (Note: if implementing
*in Java, please use a character array so that you can perform this operation
*in place.)
*/
#include<iostream>
#include<cstring>
using namespace std;

void rep(char str[]){
    int len = strlen(str);
    int _ = 0;
    for(int i=0;i<len;i++){
        if(str[i]==' ')
            _++;
    }
    int newLength = len + 2*_;
    str[newLength]='\0';
    for(int i=len-1;i>=0;i--){
        if(str[i]==' '){
            str[newLength-1]='0';
            str[newLength-2]='2';
            str[newLength-3]='%';
            newLength=newLength-3;
        }
        else{
            str[newLength-1]=str[i];
            newLength--;
        }

    }
}

int main(){
    char str[]=" A K A S H";
    rep(str);
    cout<<str;
    return 0;
}
