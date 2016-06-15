#include<iostream>
using namespace std;

int main(){
    int a=7,b=9,c=11;
    int max=a>b?a>c?a:c:b>c?b:c;
    cout<<max;
    return 0;
}
