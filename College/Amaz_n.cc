#include<iostream>
using namespace std;

bool isavail(string s1, char s2, int pos){
    for(int i=pos+1;i<s1.size();i++){
        if(s1[i]==s2){
            return true;
        }
    }
    return false;
}

bool isPattern(string s1, string s2){
    int len1 = s1.size();
    int len2 = s2.size();
    int exit = false;
    int minLen = len1<len2?len1:len2;
    for(int i=0;i<minLen;){
        if(s1[i]==s2[i]){i++;}
        else{
            if(s1[i]=='?'){
                s1[i]=s2[i];
                i++;
            }
            else if(s1[i]=='+'){
                s1[i]=s1[i-1];
                i++;
            }
        }
    }
    return s1==s2;
}

int main(){
    string s1="hel+o", s2="helllo";
    if(isPattern(s1,s2)) cout<<"True";
    else cout<<"False";
    return 0;
}
