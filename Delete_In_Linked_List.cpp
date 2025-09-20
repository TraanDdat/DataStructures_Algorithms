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

Node *delete_linkedlist(Node *head, int index){
    Node *current = head;
    Node *del = nullptr;

    if(head == nullptr || index < 1){
        return head;
    }

    if(index == 1){
        del = head;
        head = head->next;
        delete del;
        return head;
    }

    for(int i = 1; i < index-1 && current != nullptr; i++){
        current = current->next;
    }

    // If position not found or next node is null
    if(current == nullptr || current->next == nullptr){
        return head;
    }

    // Delete the node at index
    del = current->next;
    current->next = del->next;
    delete del;
    return head;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    Node *result = nullptr;

    result = create_linkedlist(arr,n);
    cout << "Original list: ";
    recursive_display_linkedlist(result);
    cout << "\n";

    // Store the returned head pointer
    result = delete_linkedlist(result,1);
    cout << "After deleting node at position 2: ";
    recursive_display_linkedlist(result);
    cout << "\n";

    return 0;
}