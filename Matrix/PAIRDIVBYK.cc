#include<iostream>
using namespace std;

typedef struct Node{
    int val;
    bool isVisited;
    Node(){
        isVisited = false;
    }
} node;

int main(){
    int LEN, K;
    cin>>LEN>>K;
    node Array[LEN];
    int count=0;
    for(int i=0;i<LEN;i++){
        cin>>Array[i].val;
    }
    if(LEN%2!=0)
        cout<<"False\n";
    else{
        for(int i=0;i<LEN-1;i++){
            for(int j=i+1;j<LEN;j++){
                if(!Array[j].isVisited && (Array[j].val%K ==K - Array[i].val%K)){
                    Array[j].isVisited = true;
                    Array[i].isVisited = true;
                    break;
                }
            }
        }
        bool flag = false;
        for(int i=0;i<LEN;i++){
            if(!Array[i].isVisited){
                flag = true;
            }
        }
        if(flag){
            cout<<"False\n";
        }
        else
            cout<<"True\n";
    }
    return 0;
}
