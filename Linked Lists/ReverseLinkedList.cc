//Non Recursive way;

#include<iostream>
#include<malloc.h>
using namespace std;

typedef struct Node{
    int data;
    struct Node *next;
}*node;

node insert(node start, int data){
    node new_node = (node)malloc(sizeof(struct Node));
    new_node->data = data;
    if(start == NULL){
            new_node->next = NULL;
            start = new_node;
            return start;
    }
    new_node->next = start;
    start = new_node;
    return start;
}

void display(node start){
    node temp = start;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node reverse(node start){
    node current = start;
    node next;
    node prev = NULL;
    while(current!=NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    start = prev;
    return start;
}

void recursiveReverse(node *start){
    node first = *start;
    node rest = first->next;
    if(rest == NULL||*start == NULL){
        return;
    }
    recursiveReverse(&rest);
    first->next->next = first;
    first->next = NULL;
    *start = rest;
}

node reverseKnodes(node start, int k){
    int count =0;
    node current = start;
    node next = current->next;
    node prev = NULL;
    while(current!=NULL && count<k){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    if(next!=NULL)
        start->next=reverseKnodes(next, 2);
    return prev;
}

int main(){
    node start = NULL;
    for(int i=-1;i<=10;i++){
        start = insert(start, i);
    }
    display(start);
    start = reverse(start);
    display(start);
    recursiveReverse(&start);
    display(start);
    start = reverseKnodes(start, 2);
    cout<<"\n";
    display(start);
    return 0;
}
