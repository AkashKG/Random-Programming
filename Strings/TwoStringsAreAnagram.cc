#include<iostream>
#include<cstring>
using namespace std;
int MAX[58]={0};
bool isAnagram(char[], char[]);

int main(){
    char s1[]="Akasaah";
    char s2[]="kAasaah";
    if(isAnagram(s1,s2))
        cout<<"Anagram";
    else
        cout<<"Not Anagram";
    return 0;
}

bool isAnagram(char s1[], char s2[]){
    if(strlen(s1)!=strlen(s2))
        return false;
    for(int i=0;s1[i]!='\0';i++){
        MAX[(int)(s1[i]-'A')]++;
    }
    for(int i=0;s2[i]!='\0';i++){
        if(!MAX[(int)(s2[i]-'A')])
            return false;
        else
            MAX[(int)(s2[i]-'A')]--;
    }
    for(int i=0;i<58;i++){
        if(MAX[i]!=0)
            return false;
    }
    return true;
}
