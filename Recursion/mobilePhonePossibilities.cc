#include<iostream>
#include<cstring>
using namespace std;

const char hashTable[10][5]={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void printPossibilities(int number[], int currDigit, char *result, int len){
    if(len == currDigit){
        cout<<result<<"\n";
        result;
    }
    int i;
    for(i=0;i<strlen(hashTable[number[currDigit]]);++i){
        result[currDigit] = hashTable[number[currDigit]][i];
        printPossibilities(number, currDigit + 1, result, len);
    }
}

int main(){
    int len;
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++)
        cin>>arr[i];
    char result[len+1];
    result[len]='\0';
    printPossibilities(arr, 0, result, len);
    return 0;
}
