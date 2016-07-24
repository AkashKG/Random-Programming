#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s;
    int T;
    bool avail[126];
    cin>>T;
    while(T--){
        int cost=0;
        memset(avail,false,sizeof(avail));
        cin>>s;
        for(string::size_type i=0;i<s.length();i++){
            if(avail[s[i]]){}
            else{
                avail[s[i]]=true;
                cost++;
            }
        }
        cout<<cost<<"\n";
    }
    return 0;
}
