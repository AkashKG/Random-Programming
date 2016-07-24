#include<iostream>
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

int main(){
    int T;
    cin>>T;
    while(T--){
        long int m, n;
        cin>>m>>n;
        long int diff = m-n;
        long int factorial = getFactorial(diff, n);
        if(n%2 == 0){
            cout<<(m-1)*factorial - 1<<"\n";
        }
        else{
            cout<<(m-1)*factorial<<"\n";
        }

    }
    return 0;
}
