#include<iostream>
#include<cstring>
#include<malloc.h>
using namespace std;
#define MAX 126

typedef struct Node{
    struct Node *children[MAX];
    bool isLeaf;
}*node;

class Trie{
    node root;
public:
    Trie();
    node getNode();
    void insert(char key[]);
    bool SEARCH(char key[]);

};
Trie::Trie(){
    root = NULL;
    node new_node = (node)malloc(sizeof(struct Node));
    root = new_node;
    if(root){
        root->isLeaf = false;
        for(int i=0;i<MAX;i++){
            root->children[i]=NULL;
        }
    }
}

void Trie::insert(char key[]){
    int len = strlen(key), index;
    node temp = root;
    for(int level = 0; level < len ; level++){
        index = (int)key[level];
        if(!temp->children[index]){
            node new_node = (node)malloc(sizeof(struct Node));
            new_node->isLeaf = false;
            for(int i=0;i<MAX;i++)
                new_node->children[i]=NULL;
            temp->children[index] = new_node;
            cout<<"\nInserted!";
            cout<<endl<<index<<" : "<<char(index);
        }
    }
    temp->isLeaf = true;
}

bool Trie :: SEARCH(char key[]){
    node temp = root;
    int len = strlen(key), index;
    for(int level = 0;level<len;level++){
        index = (int)key[level];
        cout<<endl<<index<<" : "<<char(index);
        if(!temp->children[index]){
            return false;
        }
        temp = temp->children[index];
    }
    return temp->isLeaf;
}

int main(){
    char keys [][5] = {"the", "they"};
    Trie *T = new Trie();
    for(int i=0;i<2;i++){
        T->insert(keys[i]);
    }

    if(T->SEARCH(keys[1])){
        cout<<endl<<keys[1]<<": FOUND";
    }
    else{
        cout<<"\n"<<keys[1]<<": Not Found";
    }
    return 0;
}
