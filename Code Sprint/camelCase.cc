#include<iostream>
#include<string>
#include<locale>
using namespace std;

int main(){
    string s;
    locale loc;
    cin>>s;
    int count = 1;
    for(string :: size_type i = 0;i<s.length();i++){
        if(isupper(s[i],loc))
            count++;
    }
    cout<<count;
    return 0;
}
