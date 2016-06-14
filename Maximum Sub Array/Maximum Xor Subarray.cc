#include<iostream>
using namespace std;

int max(int a, int b){return a>b?a:b;}

int main(){
    int arr[]={1,6,12,44,1,12};
    int curr_max=0;
    int max_till_now=0;
    for(int i=0; i<6; i++){
        curr_max=max(curr_max,curr_max ^ arr[i]);
        max_till_now=max(curr_max,max_till_now);
    }
    cout<<max_till_now;
    return 0;
}
