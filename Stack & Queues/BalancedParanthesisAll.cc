#include<iostream>
#include<stack>
using namespace std;

bool isAnyParan(char c){
    switch(c){
    case '(':
    case '{':
    case '[':
        return true;
        break;
    case ')':
    case '}':
    case ']':
        return false;
        break;
    }
}
bool sameCaste(char c, char t){
    if((c==')'&& t=='(')||(c==']'&& t=='[')||(c=='}'&& t=='{'))
        return true;
    return false;
}
bool BPA(char data[]){
    stack<char> st;
    st.push(data[0]);
    for(int i=1;data[i]!='\0';i++){
        if(isAnyParan(data[i])){
            st.push(data[i]);
            cout<<"\nPushed : "<<st.top();
        }
        else if(!isAnyParan(data[i])){
            if(sameCaste(data[i], st.top())){
                cout<<"\nSame Caste: Popping - "<<st.top();
                st.pop();
            }
            else{
                cout<<"\nError here"<<data[i]<<" "<<st.top();
                return false;
            }
        }
    }
    if(!st.empty())
        return false;
    return true;
}

int main(){
    char paran[]="[{()}]{}[]()[[]]{[]}";
    if(BPA(paran))
        cout<<"\nBalanced";
    else
        cout<<"\nUnbalanced";

}
