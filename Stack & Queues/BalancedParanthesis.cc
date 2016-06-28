//Only '(' & ')'
#include<iostream>
#include<stack>
using namespace std;

bool balanced(char paran[]){
    stack<char> st;
    st.push(paran[0]);
    for(int i=1;paran[i]!='\0';i++){
        if(paran[i]=='(')
            st.push(paran[i]);
        else if(paran[i]==')')
            st.pop();
    }
    if(!st.empty())
        return false;
    return true;
}

int main(){
    char paran[]="()(((())()";
    if(balanced(paran))
        cout<<"Balanced";
    else
        cout<<"Unbalanced";
}
