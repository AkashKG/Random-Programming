//Kadane's Algorithm;

#include<iostream>
using namespace std;

int max(int a, int b){
    return a>b?a:b;
}

int getMax(int arr[], int len){
    int curr_max = arr[0];
    int max_till_now = arr[0];
    for(int i=0;i<len;i++){
        curr_max = max(arr[i], curr_max + arr[i]);
        max_till_now=max(max_till_now, curr_max);
    }
    return max_till_now;
}

int main(){
    int arr[] = {-1, 2, 11, -8, 14, 31, -108, 12};
    int maxSum = getMax(arr, sizeof(arr)/sizeof(int));
    cout<<maxSum;
    return 0;
}
