#include<iostream>
#include<malloc.h>
using namespace std;

typedef struct Node {
    int data;
    struct Node *left,  *right;
}*node;

node insertNode(node root, int data){
    if(root == NULL){
        node newnode = (node)malloc(sizeof(struct Node));
        newnode->data = data;
        root = newnode;
        root->left = NULL;
        root->right=NULL;
        //cout<<"\nInserted.";
        return root;
    }
    if(data < root->data){
        //cout<<"\nGoing to insert";
        root -> left = insertNode(root->left, data);
    }
    else if(data > root -> data){
        //cout<<"\nGoing to insert";
        root -> right = insertNode(root->right, data);
    }
}

void display(node root){
    if(root == NULL)
        return;
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
node getMinValueNode(node root){
    while(root->left!=NULL)
        root = root->left;
    return root;
}
node deleteNode(node root, int data){
    if(root -> data == data){
        if(root -> left == NULL){
            node temp = root;
            root=root -> right;
            free(temp);
            return root;
        }
        else if(root->right == NULL){
            node temp = root;
            root=root -> left;
            free(temp);
            return root;
        }
        node temp = getMinValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, root->data);
        return root;
    }
    if(root->data < data){
        root->right = deleteNode(root->right, data);
    }
    else if( root->data > data){
        root->left = deleteNode(root->left, data);
    }
}

int main(){
    int data;
    int next = 1;
    node root = NULL;
    while(next){
        cin>>data;
        root = insertNode(root, data);
        cout<<"\nContinue? 1/0 : ";
        cin>>next;
    }
    node temp = root;
    display(temp);
    next = 1;
    while(next){
        cout<<"\nEnter the data to delete";
        cin>>data;
        root = deleteNode(root, data);
        display(root);
         cout<<"\nContinue? 1/0 : ";
        cin>>next;
    }
    return 0;
}
