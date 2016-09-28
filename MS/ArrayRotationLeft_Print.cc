#include<iostream>
using namespace std;

int main(){
    long long int N;
    long long int D;
    cin>>N>>D;
    int arr[N];
    for(int i=0;i<N;i++)
        cin>>arr[i];
    int start = D;
    cout<<arr[start]<<" ";
    while((start = ((start+1)%N)) !=D){
        cout<<arr[start]<<" ";
    }
}
