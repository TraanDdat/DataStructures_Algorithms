#include<iostream>

using namespace std;

struct Node{
    int val;
    Node *next;
    Node(int x) : val(x), next(nullptr) {};
};

void Display(Node *p){
    while(p!=nullptr){
        cout<<p->val<<" ";
        p=p->next;
    }
}

void Recursive_Display(Node *p){
    if(p!=nullptr){
        cout<<p->val<<" ";
        Recursive_Display(p->next);
    }
}

Node* create_linkedlist(int A[], int n){
    Node *head = nullptr;
    Node *current = nullptr;

    head = new Node(A[0]);
    current = head;

    for(int i=1; i<n;i++){
        current->next = new Node(A[i]);
        current = current->next;
    }
    return head;
}

int main(){

    return 0;
}