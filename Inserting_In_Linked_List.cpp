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

void recursive_display(Node A[]){
    Node *head = nullptr;
    head = A;
    if(head!=nullptr)
    {
        cout << head->val << " ";  
        recursive_display(head->next);
    }
    else{
        // Do Nothing
    }
}

void insert_linkedlist(Node A[], int pos, int val)
{
    Node *head = nullptr;
    Node *temp = nullptr;

    head = A;
    temp = new Node(val);

    if(pos==0){
        temp->next = head;
        head = temp;

    }
    else{
        for(int i=0; i<(pos-1); i++){
            head = head->next;
        }
        temp->next = head->next;
        head->next = temp;
    }
}

int main(){
    int arr[] = {3,5,7,8,9};
    Node *result = nullptr;
    result = create_linkedlist(arr,5);
    insert_linkedlist(result,1,4);
    insert_linkedlist(result,3,6);
    recursive_display(result);

    return 0;
}