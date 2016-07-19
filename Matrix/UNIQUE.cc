/*
Given n ranges [a1, b1], [a2, b2], [a3, b3]…. [an, bn] where all the ranges lie between [0, 10^6].
All the entries are integers. Give total number of unique integers across all the ranges.
Example:
Input:
[1, 3]
[4, 9]
[3, 7]
output: 9
*/

#include<iostream>
#include<cstring>
using namespace std;

bool isUnique[1000];

int main(){
    int N;
    int maxFinish=-1;
    int minStart=1000;
    cin>>N;
    memset(isUnique,false,sizeof(isUnique));
    int start, finish;
    while(N--){
        cin>>start>>finish;
        if(maxFinish<finish){maxFinish = finish;}
        if(minStart>start){minStart = start;}
        for(int i=start;i<=finish;i++){
            if(!isUnique[i]){
                isUnique[i]=true;
            }
        }
    }
    int count = 0;
    for(int i=minStart;i<=maxFinish;i++){
        if(isUnique[i]){
            count++;
        }
    }

    cout<<count<<"\n";
    return 0;
}
