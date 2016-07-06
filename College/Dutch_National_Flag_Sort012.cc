#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int arr[]={0,0,1,0,2,2,1,0,0,0,1,1,2,0};
    int low =0;
    int mid =0;
    int high=sizeof(arr)/sizeof(arr[0])-1;
    while(mid<high){
        switch(arr[mid]){
            case 0:swap(&arr[low++],&arr[mid++]);
                break;
            case 1:mid++;break;
            case 2:swap(&arr[mid],&arr[high--]);
                break;
        }
    }

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }

}
