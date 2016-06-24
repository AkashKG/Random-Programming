//BFS uses Queue DS.

#include<iostream>
#include<list>
#include<queue>
#include<stack>
using namespace std;

class Graph{
    int V;
    list <int> *adj;
public:
    Graph(int V);
    void addEdge(int u, int v);
    ~Graph() {delete adj;}
    void BFS(int s);
    void DFS(int s);
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int u, int v){
    adj[u].push_back(v);
}

void Graph::BFS(int s){
    bool *visited = new bool[V];
    for(int i=0;i<V;i++)
        visited[i]=false;
    queue<int> Q;
    Q.push(s);
    visited[s]=true;
    list<int>::iterator i;
    while(!Q.empty()){
        s=Q.front();
        Q.pop();
        cout<<s<<endl;
        for(i=adj[s].begin();i!=adj[s].end();i++){
            if(!visited[*i]){
                visited[*i]=true;
                Q.push(*i);
            }
        }
    }
}

void Graph::DFS(int s){
    bool *visited = new bool[V];
    for(int i=0;i<V;i++)
        visited[i]=false;
    stack<int> S;
    S.push(s);
    visited[s]=true;
    list<int> :: iterator i;
    while(!S.empty()){
        s = S.top();
        S.pop();
        cout<<s<<endl;
        for(i=adj[s].begin();i!=adj[s].end();i++){
            if(!visited[*i]){
                visited[*i]=true;
                S.push(*i);
            }
        }
    }
}
int main(){
    Graph *G = new Graph(5);
    G->addEdge(1,2);
    G->addEdge(2,3);
    G->addEdge(3,4);
    G->addEdge(1,4);
    G->BFS(1);
    G->DFS(1);
    return 0;
}
