#include<iostream>
using namespace std;

int main(){
    int day, *stock, span[10]={1};
    cin>>day;
    stock = new int[day];
    for(int i=0;i<day;i++){
        cin>>stock[i];
    }
    int pos;
    for(int i=1;i<day;i++){
        pos=i;
        for(int j=i;j>=0;j--){
            if(stock[pos]<stock[j]){
                break;
            }
            else
                span[pos]++;
        }
    }
    for(int i=0;i<day;i++)
        cout<<span[i];
}
