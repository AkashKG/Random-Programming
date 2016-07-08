#include<iostream>
using namespace std;

int max(int a, int b){return a>b?a:b;}

int main(){
    int arr[]={1,1,0,0,1,1,1,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    int currentMax =0;
    for(int i=0;i<len;i++){
        if(arr[i]){
            currentMax++;
        }
    }
    if(currentMax > len-currentMax)
        cout<<"1";
    else
        cout<<"0";
    return 0;
}
