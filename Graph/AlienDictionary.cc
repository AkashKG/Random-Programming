#include<iostream>
#include<stack>
#include<list>
#include<string>
using namespace std;

class Graph{
    int V;
    list <int> *adj;
public:
    Graph(int V);
    void addEdge(int u, int v);
    void topologicalSort();
    void topologicalSortUtil(int v, bool *visited, stack<int> &st);
    ~Graph(){delete adj;}
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[this->V];
}

void Graph::addEdge(int u, int v){
    adj[u].push_back(v);
}

void Graph::topologicalSort(){
    stack<int> st;
    bool *visited = new bool[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    for(int i=0;i<V;i++){
        if(!visited[i])
            topologicalSortUtil(i, visited, st);
    }

    while(!st.empty()){
        cout <<(char)('a' + st.top()) << " ";
        st.pop();
    }
}

void Graph::topologicalSortUtil(int v, bool *visited, stack<int> &st){
    visited[v]=true;
    list <int> :: iterator i;
    for(i=adj[v].begin(); i!=adj[v].begin();i++){
        if(!visited[*i])
            topologicalSortUtil(*i, visited, st);
    }
    st.push(v);
}

int min(int a, int b){return a<b?a:b;}

void printOrder(string words[], int n, int len){
    Graph *G = new Graph(len);
    for(int i=0;i<n-1;i++){
        string word1 = words[i], word2 = words[i+1];
        for(int j=0;j<min(word1.length(), word2.length());j++){
            if(word1[j]!=word2[j]){
                G->addEdge(word1[j]-'a', word2[j]-'a');
                break;
            }
        }
    }
    G->topologicalSort();
    delete G;
}

int main(){
    string words[] = {"caa","aaa","aab"};
    printOrder(words, 3, 3);
    return 0;
}
