#include<iostream>
#include<cstring>
using namespace std;

int CeilIndex(int v[], int l, int r, int key){
    while(r-l>1){
        int m = l + (r-l)/2;
        if(v[m]>key)
            r=m;
        else
            l=m;
    }
    return r;
}

int LIS(int v[], int len){
    if(!len) return 0;
    int tail[len];
    memset(tail,0,sizeof(tail));
    int length = 1;
    tail[0] = v[0];
    for(size_t i=0; i<len;i++){
        if(v[i]<tail[0]){
            tail[0]=v[i];
        }
        else if(v[i]>tail[length - 1]){
            tail[length] = v[i];
            length++;
        }
        else{
            tail[CeilIndex(tail,-1, length-1,v[i])] = v[i];
        }
    }
    return length;
}

int main(){
    int arr[]={ 2, 5, 3, 7, 11, 8, 10, 13, 6 };
    cout<<LIS(arr, 9);
    return 0;
}
