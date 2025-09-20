#include<iostream>

using namespace std;

//template<class T>

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
        int dequeue();
        void Display();
        int front_value() {
            if(front == rear){
                cout << " Queue is empty " << endl;
                return -1; // Indicate that the queue is empty
            } else {
                return Q[(front + 1) % size]; // Return the front value without removing it
            }
        }
        int empty(){
            if(front == rear){
                return 1; // Queue is empty
            } else {
                return 0; // Queue is not empty
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

int Queue::dequeue(){
    int x = -1;
    if(front == rear){
        cout << " Queue is empty " << endl;
        return x;
    }
    else{
        front = (front+1)%size;
        x = Q[front];
        return x;
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

void BFS(int vtx, int A[][8], int n){
    Queue q(20);
    int visited[20] = {0};

    cout << vtx << " " << flush;
    visited[vtx] = 1;
    q.enqueue(vtx);

    while(!q.empty()){
        int u = q.dequeue();
        for(int v=1; v<=n; v++){
            if(A[u][v]==1 && visited[v]==0){
                cout << v << " " << flush;
                visited[v] = 1;
                q.enqueue(v);
            }
        }

    }
    cout << endl;
}

int main(){
    int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};
 
    cout << "Vertex: 1 -> " << flush;
    BFS(1, A, 8);
 
    cout << "Vertex: 4 -> " << flush;
    BFS(4, A, 8);
    return 0;
}