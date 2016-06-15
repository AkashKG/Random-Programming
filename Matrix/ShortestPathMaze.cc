#include<iostream>
#include<limits.h>
#include<queue>
using namespace std;

typedef struct Point{
    int x, y;
}point;

typedef struct Node{
    point p;
    int distance;
}node;

int rx[]={1,0,-1,0};
int ry[]={0,1,0,-1};

class Maze{
    int row, col;
    int minDistance;
    int **matrix;
    bool **visited;
public:
    void computeMinDistance(point src, point des);
    Maze(int row, int col);
    int getDistance(){
        return minDistance;
    }
};

Maze::Maze(int row, int col){
    this->row = row;
    this->col = col;
    matrix = new int*[row];
    visited= new bool*[row];
    for(int i=0;i<row;i++){
        matrix[i]=new int[col];
        visited[i]=new bool[col];
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>visited[i][j];
            visited[i][j]=false;
        }
    }
    minDistance=INT_MAX;
}

void Maze::computeMinDistance(point src, point des){
    if(!matrix[src.x][src.y] || !matrix[des.x][des.y])
        return;
    visited[src.x][src.y]=true;
    node n = {src,0};
    queue <node> q;
    q.push(n);
    while(!q.empty()){
        n=q.front();
        src=n.p;
        q.pop();
        if(src.x==des.x && src.y==des.y){
            minDistance = n.distance;
            return;
        }
        for(int i=0;i<4;i++){
            point temp;
            temp.x = src.x+rx[i];
            temp.y = src.y+ry[i];
            if(temp.x<row&&temp.y<col&&temp.x>=0&&temp.y>=0&&!visited[temp.x][temp.y]&&matrix[temp.x][temp.y]){
                visited[temp.x][temp.y]=true;
                node curr={{temp.x,temp.y},n.distance+1};
                q.push(curr);
            }
        }
    }
}

int main(){
    Maze *M = new Maze(4,4);
    point p1={0,0};
    point p2={3,3};
    M->computeMinDistance(p1,p2);
    cout<<M->getDistance();
    return 0;
}
