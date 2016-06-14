#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    int nearest_p_2=1;
    while(nearest_p_2<number){
        nearest_p_2=nearest_p_2*2;
        if(nearest_p_2*2>number)
            break;
    }
    cout<<2*(number-nearest_p_2)+1;
    return 0;
}
