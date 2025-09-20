#include<iostream>

using namespace std;

class Queue
{
    private:
        int size;
        int front;  // for delete
        int rear;   // for insert
        int *Q;     // for dynamic allocation
    public:
        Queue(int size){
            front = rear = -1;
            this->size = size;
            Q = new int[this->size];
        }
        void enqueue(int x);
        void dequeue();
        void Display();
        int front() {
            if(front == rear){
                cout << " Queue is empty " << endl;
                return -1; // Indicate that the queue is empty
            } else {
                return Q[(front + 1) % size]; // Return the front value without removing it
            }
        }
};

void Queue::enqueue(int x){
    if(((rear+1)%size) == front ){
        cout << " Queue is full " << endl;
    }
    else{
        rear = (rear + 1)%size;
        Q[rear] = x;
    }
}

void Queue::dequeue(){
    int x = -1;
    if(front == rear){
        cout << " Queue is empty " << endl;
    }
    else{
        front = (front+1)%size;
        x = Q[front];
    }
}

void Queue::Display(){
    int i = front+1;
    do{
        cout << " The enqueued value is " << Q[i] << endl;
        i=(i+1)%size;
    }while(i!=(rear+1)%size);
    cout << "\n" << endl;
}

int main(){
    Queue q(3);
    q.enqueue(10);
    q.Display();
    q.enqueue(20);
    q.Display();
    q.dequeue();
    q.Display();
    q.enqueue(30);
    q.Display();
    q.dequeue();
    q.Display();
    q.enqueue(40);
    q.Display();
    q.enqueue(50);
    return 0;
}