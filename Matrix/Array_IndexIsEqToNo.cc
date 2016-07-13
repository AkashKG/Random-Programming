#include<iostream>
using namespace std;

int getPos(int arr[], int low, int high){
    if(low>high)
        return -1;
    int mid = (low+high)/2;
    if(mid == arr[mid])
        return mid;
    return getPos(arr,low,mid-1);
    return getPos(arr,mid+1,high);
}

int main(){
    int arr[]={124,123,112,3,12,23,43};
    int pos = getPos(arr, 0,(sizeof(arr)/sizeof(arr[0]))-1);
    cout<<pos;
    return 0;
}
