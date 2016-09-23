#include<iostream>
#include<stack>
using namespace std;

/*
    maxAreaUH -> Maximum area Under histogram:
    It calculates the maximum area and then return it.
    arr[] : the height of the histograms
    N: Total number of histograms.
*/

int maxAreaUH(int arr[], int N){
    stack<int> s;
    int maxArea=0, TOS, currArea, i=0;                      /*[1] TOS: Top Of Stack
                                                              [2] Max Area initially 0
                                                            */
    while(i<N){
        if(s.empty() || arr[i]>arr[s.top()]){    /*If the stack is empty or the height is greater than the TOS[1]*/
            s.push(i++);                        /*Post increment*/
        }
        else{
            TOS = s.top();
            s.pop();
            currArea = arr[TOS]*(s.empty()?i:i-s.top()-1);
            if(currArea>maxArea) maxArea = currArea;
        }
    }
    while(!s.empty()){
        TOS = s.top();
        s.pop();
        currArea = arr[TOS]*(s.empty()?i:i-s.top()-1);
        if(currArea>maxArea) maxArea = currArea;
    }
    return maxArea;
}

int main(){
    int arr[]={6, 2, 5, 4, 5, 1, 6};
    cout<<"The maximum area is: "<<maxAreaUH(arr,sizeof(arr)/sizeof(arr[0])-1);
    return 0;
    return 0;
}
