#include<iostream>
using namespace std;

int getCherriesV(char arr[][3], int R, int div, int limit){
    int count = 0;
    for(int i=0;i<R;i++)
        for(int j=div;j<limit;j++)
            if(arr[i][j]=='#')
                count++;
    return count;
}

bool isPossible_V(char arr[][3], int R, int C){
    int div = 1;
    while(div<C){
        int count_left = getCherriesV(arr,R,0,div);
        int count_right= getCherriesV(arr,R,div, C);
        cout<<count_left<<" : "<<count_right<<"\n";
        if(count_left == count_right)
            return true;
        ++div;
    }
    return false;
}

int getCherriesH(char arr[][3], int C, int start, int limit){
    int count = 0;
    for(int i=start;i<limit;i++){
        for(int j=0;j<C;j++){
            if(arr[i][j]=='#')
                count++;
        }
    }
    return count;
}

bool isPossible_H(char arr[][3], int R, int C){
    int div = 1;
    while(div<R){
        int count_up = getCherriesH(arr,C,0,div);
        int count_down = getCherriesH(arr,C,div,R);
        cout<<count_up<<" : "<<count_down<<"\n";
        if(count_up == count_down)
            return true;
        ++div;
    }
    return false;
}

bool isPossible(char arr[][3], int R, int C){
    if(isPossible_V(arr,R,C))
        return true;
    return isPossible_H(arr,R,C);
}

int main(){
    char arr[][3] = {
                     '#','#','#',
                     '.','#','.',
                     '#','.','#'
                     };
    if(isPossible(arr,3,3)){
        cout<<"True!";
    }
    else{
        cout<<"False";
    }
    return 0;
}
