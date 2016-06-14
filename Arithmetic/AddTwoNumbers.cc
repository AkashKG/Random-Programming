#include<iostream>
using namespace std;

int getSum(int a, int b){
    return b==0?a:getSum(a^b,(a&b)<<1);
}
int main(){
    int num1, num2;
    cin>>num1>>num2;
    cout<<getSum(num1, num2);
    return 0;
}
