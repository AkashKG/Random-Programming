#include<iostream>
#include<queue>
using namespace std;

void oneToN_Binary(int);

int main(){
    int num;
    cin>>num;
    oneToN_Binary(num);
    return 0;
}

void oneToN_Binary(int num){
    string s1, s2;
    queue <string> Q;
    Q.push("1");
    while(num--){
        s1 = Q.front();
        cout<<s1<<endl;
        Q.pop();
        s2=s1;
        Q.push(s1.append("0"));
        Q.push(s2.append("1"));
    }
}
