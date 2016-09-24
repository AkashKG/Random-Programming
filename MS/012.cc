#include<iostream>
using namespace std;
/*
    Swapping two numbers, by address
*/
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/*
    sort012: sorts the array with only 0, 1 & 2.
    At least 1 '0','1' & '2' each must be present.
    Initially low & mid is at the same position, i.e. 0
    high is at len-1;
*/

void sort012(int arr[], int N){
    int low=0, mid=0, high=N-1;
    while(mid<high){                                /*Only working with the value of arr[mid]*/
        switch(arr[mid]){
        case 0:
            swap(&arr[low++], &arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(&arr[high--], &arr[mid]);
            break;
        }
    }
}

int main(){
    int arr[]={0,1,1,1,1,2,2,2,0,0,0,1,2,1,0,1,2,2,2,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    sort012(arr,len);
    cout<<"Sorted, printing. . .\n";
    for(int i=0;i<len;i++)                          /*Print*/
        cout<<arr[i]<< " ";
    return 0;
}
