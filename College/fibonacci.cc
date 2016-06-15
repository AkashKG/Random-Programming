#include<iostream>
using namespace std;

int main(){
    int N=20;
    int prev_prev=0;
    int prev = 1;
    cout<<prev_prev<<" "<<prev<<" ";
    N=N-2;
    int curr=0;
    while(N--){
        int curr=prev + prev_prev;
        cout<<curr<<" ";
        prev_prev=prev;
        prev=curr;
    }
    return 0;
}
