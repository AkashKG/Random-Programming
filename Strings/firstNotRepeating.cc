/*Find the first non-repeating character of the string.*/
#include<iostream>
#include<string>
using namespace std;

typedef struct Node{
    int count;
    int index;
    Node(){
        count = 0;
        index = -1;
    }
}node;

int main(){
    string s;
    cin>>s;
    node ch[126];
    for(string::size_type i = 0; i<s.length(); i++){
        ch[s[i]].count++;
        ch[s[i]].index=i;
    }
    int result = s.length();
    for(int i=0; i<126; i++){
        if(ch[i].count == 1 && ch[i].index<result){
            result = ch[i].index;
        }
    }
    if(result == s.length()){
        cout<<"All Repeat\n";
    }
    else{
        cout<<s[result]<<"\n";
    }
    return 0;
}
