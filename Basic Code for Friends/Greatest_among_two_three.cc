#include<iostream>
using namespace std;

int main(){
    int a, b, c, greatestOfTwo, greatestOfThree;
    cin>>a>>b>>c;
    greatestOfTwo = a>b?a:b; // Greatest Of a & b is stored;
    cout<<greatestOfTwo<<"\n";
    greatestOfThree = a>b?(a>c?a:c):(b>c?b:c); // greatest from a, b & c;
    cout<<greatestOfThree;
    return 0;
}
