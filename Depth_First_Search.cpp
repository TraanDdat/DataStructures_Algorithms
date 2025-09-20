#include<iostream>

using namespace std;

void DFS(int vtx, int A[][8], int n){
    static int visited[8] = {0};  // Initialize all vertices as unvisited

    if(visited[vtx] == 0){
        cout << vtx << ", " << flush;
        visited[vtx] = 1;  // Mark the starting vertex as visited
        for(int v = 1; v <= n; v++){
            if(A[vtx][v] == 1 && visited[v] == 0){
                DFS(v,A,n);  // Recursively visit the adjacent vertex
            }
        }
    }
}

int main()
{ 
    int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};
  
    cout << "Vertex: 1 -> " << flush;
    DFS(1, A, 8);
    return 0;
}