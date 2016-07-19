#include<iostream>
#include<cstring>
using namespace std;


bool canPairs(int *arr, int LEN, int rem[], int K){
    int remainder;
    for(int i=0;i<LEN;i++){
        remainder = arr[i]%K;
        if(remainder*2 == K){
            if(rem[remainder]%2!=0){
                return false;
            }
        }
        else if(remainder == 0){
            if(rem[remainder]&1 == 0)
                return false;
        }
        else if(rem[remainder]!=rem[K-remainder])
            return false;
    }
    return true;
}

int main(){
    int LEN, K;
    cin>>LEN>>K;
    int *arr = new int[LEN];
    int rem[K-1];
    memset(rem,0,sizeof(rem));
    for(int i=0; i<LEN; i++){
        cin>>arr[i];
        rem[arr[i]%K]++;
    }
    if(canPairs(arr,LEN,rem,K))
        cout<<"TRUE\n";
    else
        cout<<"FALSE\n";
    return 0;
}
