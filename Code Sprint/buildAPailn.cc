#include<iostream>
using namespace std;

void printUtil(string s, string t, int len){

}

void printPalindromicString(string s, string t){
    int len = 1;
    while(len!=s.length()){
        for(string::size_type i=0;i<s.length();i=i+len)
            printUtil(s,t,len);
    }
}

int main(){
    int T;
    while(T--){
        string s, t;
        cin>>s>>t;
        printPalindromicString(s,t);
    }
    return 0;
}
