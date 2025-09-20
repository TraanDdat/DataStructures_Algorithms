#include<iostream>

using namespace std;

/* Format 1 */

// struct Node
// {
//     int data;
//     Node *next;
//     Node(int val) : data(val), next(nullptr) {}
// }*pointer=NULL; // Declare the pointer to the head of the linked list

// void creat_linkedlist(int A[], int n)
// {
//     int i;
//     Node *t,*last;
//     pointer = new Node(A[0]);
//     pointer->data=A[0];
//     pointer->next=nullptr;
//     last=pointer;
//     for (i = 1; i < n; i++)
//     {
//         t = new Node(A[i]);
//         t->data = A[i];
//         t->next = nullptr;
//         last->next = t;
//         last = t;
//     }
// }

// void display_linkedlist(Node *p)
// {
//     Node *current = p;
//     while (current != nullptr)
//     {
//         cout << current->data << " ";
//         cout << current->next << " ";
//         current = current->next;
//     }
//     cout << endl;
// }

/*-----------------------------------*/

/* Format 2 */
struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

void create_linkedlist(int A[], int n)
{
    Node *first = nullptr;
    Node *p = nullptr;

    first = new Node(A[0]);
    p = first;
    cout << A[0] << " " << p << " " << p->next << " " << first << endl;

    for(int i = 1; i < n; i++)
    {
        p->next = new Node(A[i]);
        cout << A[i] << " " << p << " " << p->next << " " << first << endl;
        p = p->next;
    }

}

/*-----------------------------------*/

int main()
{
    int A[] = {1, 2, 3, 4, 5};

    /* Format 1 */
    //creat_linkedlist(A, 5);
    //display_linkedlist(pointer);
    /*-----------------------------------*/

    /* Format 2 */
    create_linkedlist(A, 5);
    /*-----------------------------------*/

    return 0;
}