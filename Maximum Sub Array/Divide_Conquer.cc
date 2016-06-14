#include<iostream>
using namespace std;

int max(int a, int b, int c){
    return a>b?(a>c?a:c):b>c?b:c;

}
int max(int a, int b){
    return a>b?a:b;
}

int getSum(int low, int high, int arr[]){
    int sum=0, retSum=-200;
    for(int i=low;i<=high;i++){ retSum=max(sum=sum+arr[i], retSum); }
    return retSum;
}

int maxCross(int arr[], int low, int mid, int high){
    return getSum(low,mid,arr)+getSum(mid+1,high,arr);
}

int getMax(int arr[], int low,int high){
    if(low == high){ return arr[low];}
    int mid = (low+high)/2;
    return max(getMax(arr,low,mid), getMax(arr, mid+1,high), maxCross(arr,low, mid,high));
}

int main(){
    int arr[] = {2, 3, 4, 5, 7};;
    int maxSum = getMax(arr,0, sizeof(arr)/sizeof(int)-1);
    cout<<maxSum;
    return 0;
}
