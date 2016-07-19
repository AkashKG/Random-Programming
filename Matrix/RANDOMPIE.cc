#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){
    int PIE;
    int r = rand() % 3 + (-1);
    while(r!=-1){
        r = rand() % 3 + (-1);
    }
    cout<<acos(r);
}
