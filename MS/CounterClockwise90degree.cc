#include<iostream>
using namespace std;
const int N = 4;
void rotateCC90(int arr[N][N]){
    int temp;
    for(int i=0;i<N/2;i++){
        for(int j=i;j<N-i-1;j++){
            temp = arr[i][j];
            arr[i][j]=arr[j][N-i-1];
            arr[j][N-i-1]=arr[N-1-i][N-j-1];
            arr[N-1-i][N-j-1]=arr[N-j-1][i];
            arr[N-j-1][i]=temp;
        }
    }
}

void display(int arr[][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    int arr[][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    display(arr);
    rotateCC90(arr);
    display(arr);
}
