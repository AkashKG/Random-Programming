#include<iostream>
using namespace std;

void printSpiral(int arr[4][4], int row){
    int col=row; //this case.
    int startingCol=0;
    int startingRow=0;
    int maxRow=row-1;
    int maxCol=col-1;

    while(startingRow<maxRow && startingCol<maxCol){
        for(int i=startingCol;i<=maxCol;i++){
            cout<<arr[startingRow][i]<<" ";
        }
        startingRow++;
        for(int i=startingRow;i<=maxRow;i++){
            cout<<arr[i][maxCol]<<" ";
        }
        maxCol--;
        for(int i=maxCol;i>=startingCol;i--){
            cout<<arr[maxRow][i]<<" ";
        }
        maxRow--;
        for(int i=maxRow;i>=startingRow;i--){
            cout<<arr[i][startingCol]<<" ";
        }
        startingCol++;
    }
}

int main(){
    int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printSpiral(arr,4);
    return 0;
}
