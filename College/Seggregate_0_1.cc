#include<iostream>
using namespace std;

int main(){
    int arr[] ={0, 1, 0, 1, 0, 0, 0, 1, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = len-1;
    while(left<right){
        while(!arr[left] && left<right)
            left++;
        while(arr[right] && left<right)
            right--;
        if(left < right){
            arr[left]=0;
            arr[right]=1;
            left++;
            right--;
        }
    }

    for(int i=0;i<len;i++)
        cout<<arr[i]<<" ";
    return 0;
}
