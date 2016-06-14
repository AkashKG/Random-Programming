#include<iostream>
#include<algorithm>
using namespace std;

void swap(char *a, char *b){
    char temp= *a;
    *a=*b;
    *b=temp;
}

void getNext(char str[], int len){
    int i=0;
    for(i=len-1;i>0;i--){
        if(str[i-1]<str[i])
            break;
    }
    if(i==0)
        return;
    int smallest = i;
    int pivot = i-1;
    for(int j=i+1;j<len;j++){
        if(str[j]<str[smallest] && str[j] > str[pivot])
            smallest = j;
    }
    swap(&str[pivot], &str[smallest]);
    sort(str +i, str+len);

}

int main(){
    char str[]="123455";
    getNext(str, 6);
    cout<<"\n"<<str;
    return 0;
}
