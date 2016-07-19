#include<iostream>
using namespace std;

int main(){
    int T, N;
    cin>>T>>N;
    int *arr = new int[T];
    bool isDiv = false;
    for(int i=0;i<T;i++){
            cin>>arr[i];
            if((arr[i]+arr[i-1])%N == 0)
                isDiv = true;
    }
    if(isDiv)
        cout<<"True";
    else{
        for(int i=0; i<T-1; i++){
            for(int j = i+1; j<T; j++){
                if((arr[i]+arr[j])%N == 0){
                    cout<<"True";
                    break;
                }
            }
        }
    }
    return 0;
}
