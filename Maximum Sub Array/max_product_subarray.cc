#include<iostream>
using namespace std;

int getMax(int arr[], int len){
    int temp;
    int max_ending_here=1;
    int min_ending_here=1, max_till_here = 0;
    for(int i=0; i<len; i++){
        if(arr[i]>0){
            max_ending_here *=arr[i];
            min_ending_here=min(min_ending_here*arr[i], 1);
        }
        else if(arr[i]==0){
            min_ending_here = 1;
            max_ending_here = 1;
        }
        else{
            temp = max_ending_here;
            max_ending_here=max(min_ending_here*arr[i],1);
            min_ending_here=temp*arr[i];
        }
        if(max_till_here < max_ending_here)
            max_till_here = max_ending_here;
    }
    return max_till_here;
}

int main(){
    int arr[]={-1,1,5,-8,-5};
    int maxProd = getMax(arr,5);
    cout<<maxProd;
    return 0;
}
