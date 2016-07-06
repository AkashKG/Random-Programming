#include <iostream>
#include <cstring>
using namespace std;
const char hashTable[10][5] = {"0", "1", "abc", "def", "ghi", "jkl",
                               "mno", "pqrs", "tuv", "wxyz"};

void  printWords(int number[], int curr_digit, char output[], int n){
    int i;
    if (curr_digit == n){
        cout<<"\n"<<output;
        return ;
    }
    for (i=0; i<strlen(hashTable[number[curr_digit]]); i++){
        output[curr_digit] = hashTable[number[curr_digit]][i];
        printWords(number, curr_digit+1, output, n);
    }
}

int main(void){
    int number[] = {0, 2, 3, 4};
    int n = sizeof(number)/sizeof(number[0]);
    char result[n+1];
    result[n] ='\0';
    printWords(number, 0, result, n);
    return 0;
}
