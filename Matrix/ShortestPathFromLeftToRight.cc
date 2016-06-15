#include<iostream>
#include<limits.h>
#include<cstring>
#include<queue>
using namespace std;

typedef struct Point{
    int x,y;
}point;

int min(int a, int b){return a>b?b:a;}
typedef struct Node{
    point p;
    int distance;
}node;

class Maze{
    bool **visited;
    int **matrix;
    short row, col;
    int minDistance;
public:
    Maze(short row, short col);
    void getDistance();
    int getCurrDistance(point src);
    ~Maze(){
        delete visited;
        delete matrix;
    }
    bool isValid(int r, int c){
        return (r >= 0) && (r < row) &&
           (c >= 0) && (c < col);
    }

};

Maze::Maze(short row, short col){
    this->row = row;
    this->col = col;
    visited = new bool *[row];
    matrix = new int *[row];
    for(int i=0;i<row;i++){
        visited[i]=new bool[col];
        matrix[i]=new int[col];
    }
    minDistance = INT_MAX;
    for(int i=0;i<this->row;i++){
        for(int j=0;j<this->col;j++){
            cin>>matrix[i][j];
            visited[i][j]=false;
        }
    }
    cout<<"Added!";
}

void Maze::getDistance(){

    point  src;
    for(int i=0;i<row;i++){
        src.x=i;
        src.y=0;
        minDistance=min(getCurrDistance(src), minDistance);
        for(int i=0;i<this->row;i++){
            for(int j=0;j<this->col;j++){
                visited[i][j]=false;
            }
        }
    }
    cout<<"\n"<<minDistance;
}

int Maze::getCurrDistance(point src){
    cout<<"\n1";
    if (matrix[src.x][src.y]==0)
        return INT_MAX;
    visited[src.x][src.y]=true;
    queue<node> q;
    node n = {src, 0};
    q.push(n);
    cout<<"\n2";
    while(!q.empty()){

        node curr = q.front();
        cout<<"\n3";
        q.pop();
        point p = curr.p;

        cout<<"\ncurr.distance"<<curr.distance<<"col:"<<p.y;
        if(p.y==col-1){
            cout<<"\n5";
            cout<<"\nDistance:" <<curr.distance;
            return curr.distance;
        }
        for(int i=-1;i<=1;i++){
            cout<<"\n6";
            int r=p.x+i;
            int c = p.y + i==0?-1:0;
            cout<<"\nFUCK";
            cout<<"\n7";
            if(isValid(r,c) && !visited[r][c]&&matrix[r][c]==1){
                    cout<<"\n8";
                visited[r][c]=true;
                node curr_={{r,c},curr.distance+1};
                cout<<"\n9";
                q.push(curr_);
                cout<<"\n10";
            }
        }
    }
    return INT_MAX;
}

int main(){
    Maze *M = new Maze(4,4);
    M->getDistance();
    delete M;
    return 0;
}
