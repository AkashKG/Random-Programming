#include<iostream>
#include<string>
using namespace std;
#define DIV 1000000007
int main(){
    string s;
    cin>>s;
    bool found = false;
    long long int count = 0;
    for(string::size_type i=0; i<s.length()-1; i++){
        for(string::size_type j = i+1;j<s.length();j++){
            if(s[i]==s[j]){
                //cout<<i<<":"<<j<<"\n";
                if(i==j-1){
                    continue;
                }
                for(string::size_type k = i+1; k<=j-2; k++){
                        for(string::size_type l = k+1; l<=j-1;l++){
                            if(s[k]==s[l]){
                                //cout<<k<<":"<<l<<" count: "<<count+1<<"\n";
                                count++;
                                found = true;
                                break;
                            }
                        }
                        if(found){
                            found = false;
                            break;
                        }
                }
            }
        }
    }
    cout<<count%DIV;
    return 0;
}
