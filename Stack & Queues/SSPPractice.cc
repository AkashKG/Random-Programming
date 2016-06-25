#include<iostream>
#include<stack>
using namespace std;

void stockSpan(int *stock, int *span, int day){
    stack <int> st;
    st.push(0);
    for(int i=1;i<day;i++){
        while(!st.empty()&&stock[st.top()]<stock[i]){
            st.pop();
        }
        span[i]=st.empty()?i+1:i-st.top();
        st.push(i);
    }
}

int main(){
    int *stock, *span, day; cin>>day;
    stock = new int[day];
    span = new int[day];
    for(int i=0;i<day;i++){
        cin>>stock[i];
        span[i]=0;
    }
    span[0]=1;
    stockSpan(stock, span, day);
    for(int i=0;i<day;i++){
        cout<<span[i]<<" ";
    }
    return 0;
}
