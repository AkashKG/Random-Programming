#include<iostream>
using namespace std;

int main(){
    int B[] = {1,1,1,3,3,3,20,4,4,4};
    int ones = 0 ;
    int twos = 0 ;
    int not_threes;
    int x ;
    for(int i=0; i<10; i++){
        x =  B[i];
        twos |= ones & x ;
        cout<<twos<<endl;
        ones ^= x ;
        cout<<ones<<endl;
        not_threes = ~(ones & twos) ;
        cout<<not_threes<<endl;
        ones &= not_threes ;
        cout<<ones<<endl;
        twos &= not_threes ;
        cout<<twos<<endl<<"- - - - - - - - - - - - - - - - - - -\n\n";
    }
    cout<<"Answer: "<<ones;
    return 0;
}
