#include<iostream>
#include<cmath>
using namespace std;

long int getFactorial(long int f, long int n){
    long int product = 1;
    if(f==1)
        return n;
    for(int i=1;i<=f;i++){
        product = product * n;
    }
    return product;
}

long int max(int a, int b){
    return a>b?a:b;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        long int m, n;
        cin>>m>>n;
        long int ans = max(0, m + 1 - n)*pow(n,m-n) - max(0,m-n)*pow(n, m-n-1);
        cout<<ans<<"\n";
    }
    return 0;
}
