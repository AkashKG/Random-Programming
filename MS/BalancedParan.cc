#include<iostream>
#include<stack>
using namespace std;

bool is_balanced(string expression) {
      stack<char> s;
      for(int i=0;i<expression.size();i++){
          if(expression[i]=='('||expression[i]=='{'||expression[i]=='['){
              s.push(expression[i]);
          }
          else if(!s.empty()){
              switch(expression[i]){
                  case ')': if(s.top()=='(')
                                s.pop();
                            else
                                return false;
                  break;
                  case '}':if(s.top()=='{')
                                s.pop();
                           else
                                return false;
                  break;
                  case ']':if(s.top()=='[')
                                s.pop();
                           else
                                return false;
                  break;
              }
          }
          else return false;
      }
    if(s.empty())
        return true;
    else
        return false;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
