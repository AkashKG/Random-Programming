#include<iostream>
using namespace std;

void swap(char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void printPermutation(char str[], int low, int high){
    if(low == high)
        cout<<str<<"\n";
    for(int i=low;i<=high;i++){
        swap(str + low, str + i);
        printPermutation(str, low+1, high);
        swap(str + low, str + i);
    }
}

int main(){
    char str[]="Rohit";
    printPermutation(str, 0, 4);
    return 0;
}
