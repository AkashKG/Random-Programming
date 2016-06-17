#include<iostream>
#include<cstring>
using namespace std;
#define MAX 10
typedef struct NODE{
    char c;
    int count;
}MAP;
MAP Map[MAX];

void change(char str[]){
    char c = str[0];
    int pos=0;
    int count=0;
    Map[pos].c=c;
    for(int i=0;i<=strlen(str);i++){
        if(str[i]!=c){
            c=str[i];
            Map[pos].count=count;
            count=1;
            if(c=='\0') {break;}
            pos++;
            Map[pos].c=c;
        }
        else{count++;}
    }
    for(int i=0;i<=pos;i++){ cout<<Map[i].c<<Map[i].count;}
}

int main(){
    char str[]="aaaabbbbcc";
    change(str);
    return 0;
}
