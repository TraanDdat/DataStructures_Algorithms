#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
}*front=nullptr,*rear=nullptr;

void enqueue(int x){
    Node *temp = nullptr;
    temp = new Node;

    if(temp == nullptr){
        cout << " Queue is full " << endl;
    }
    else{
        temp->data = x;
        temp->next = nullptr;
        if(front == nullptr){
            front = rear = temp; 
        }
        else{
            rear->next = temp;
            rear = temp; 
        }
    }
}

int dequeue(){
    int x = -1;
    Node *temp = nullptr;

    if(front == nullptr){
        cout << " Queue is empty " << endl;
    }
    else{
        temp = front;
        front = front->next;
        x = temp->data;
        delete temp;
    }
    return x;
}

void Display(){
    Node *temp = front;
    while(temp!=nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    Display();
    

    return 0;
}