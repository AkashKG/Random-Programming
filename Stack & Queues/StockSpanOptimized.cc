#include<iostream>
#include<stack>
using namespace std;
int span[10]={1};

void stockSpanOptimized(int *stock, int day){
    stack <int> S;
    S.push(0);
    for(int i=1;i<day;i++){
        while(!S.empty() && stock[S.top()]<stock[i]){
            S.pop();
        }
        span[i]=S.empty()?i+1:i-S.top();
        S.push(i);
    }
}


int main(){
    int day, *stock;
    cin>>day;
    stock = new int[day];
    for(int i=0;i<day;i++)
        cin>>stock[i];
    stockSpanOptimized(stock, day);
    for(int i=0;i<day;i++)
        cout<<span[i];
    return 0;
}
