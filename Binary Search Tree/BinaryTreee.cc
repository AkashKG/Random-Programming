#include<iostream>
#include<malloc.h>
using namespace std;

typedef struct Node{
    int data;
    struct Node *right;
    struct Node *left;
}*node;

node insert(node root, int data){
    node new_node = (node)malloc(sizeof(struct Node));
    if(root == NULL){
        new_node->left = NULL;
        new_node->right = NULL;
        new_node->data=data;
        cout<<"Inserted : "<<data<<endl;
        root = new_node;
        return root;
    }
    if(data < root->data){
        root->left = insert(root->left, data);
    }
    else if(data > root->data){
        root->right = insert(root->right, data);
    }

}

void display(node root){
    if(root==NULL) {return;}
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}

void mirrorTree(node *root){
    node current=*root;
    if(*root == NULL)
        return;
    mirrorTree(&current->left);
    mirrorTree(&current->right);
    node temp=current->left;
    current->left = current->right;
    current->right=temp;
}

int main(){
    node root = NULL;
    int arr[]={1,2,9, 0, 11, 4, 8};
    int len = sizeof(arr)/sizeof(arr[0]);
    len--;
    while(len){
        root = insert(root, arr[len]);
        len--;
    }
    node temp = root;
    display(temp);
    mirrorTree(&root);
    display(root);
}
