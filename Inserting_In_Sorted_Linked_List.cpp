/* Time Complexity */
/* Max --> O(n) */
/* Min --> O(1) */

#include<iostream>

using namespace std;

struct Node{
    int val;
    Node *next;
    Node(int x) : val(x), next(nullptr){};
};

Node* create_linkedlist(int A[], int n){
    Node *head = nullptr;
    Node *current = nullptr;

    head = new Node(A[0]);
    current = head;

    for(int i=1; i<n; i++){
        current->next = new Node(A[i]);
        current = current->next;
    }

    return head;
}

void recursive_display_linkedlist(Node A[])
{
    Node *head = nullptr;
    
    head = A;

    if(head!=nullptr){
        cout << head->val << " ";
        recursive_display_linkedlist(head->next);
    }
    else{
        // Do Nothing
    }
}

void insert_sorted_linkedlist(Node** A, int val){
    Node *t, *q = nullptr;
    Node *head = nullptr;

    head = *A;
    t = new Node(val);
    t->next = nullptr;

    if(head==nullptr) {
        *A = t;  // Update the original pointer
    }
    else{
        while(head!=nullptr && head->val < val){
            q = head;
            head = head->next;
        }
        if(*A==head){
            t->next = head;
            *A = t;
        }
        else{
            t->next = q->next;
            q->next = t;
        }
    }
}

int main(){
    int arr[] = {10,20,30,40,50};
    Node *result = nullptr;

    result = create_linkedlist(arr, 5);
    insert_sorted_linkedlist(&result,45);
    recursive_display_linkedlist(result);

    return 0;
}