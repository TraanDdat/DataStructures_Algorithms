#include <iostream>

using namespace std;

/* 3 statements --> Time complexity O(3 * (n^0)) --> O(1) */
int swap(int &a, int &b) {
    int temp = a;    // 1 statement
    a = b;          // 1 statement
    b = temp;      // 1 statement   
    return 0;
}

/* Time Complexity --> 1 + (n+1) + n + 1 --> 2n + 3 --> O(n)  */
int sum(int A[], int n) {
    int total = 0;                  // 1 statement
    for (int i = 0; i < n; i++) {   // i = 0 --> 1 statement; i < n --> n + 1 statements; i++ --> n statements
        total += A[i];              // n statements
    }
    return total;                   // 1 statement
}

/* Time Complexity --> (n+1) + n*(n+1) + n*n --> O(n^2) */
void add(int A[], int n, int value) {
    for (int i = 0; i < n; i++) {       // n+1 statements
        for (int j = 0; j < n; j++) {   // n*(n+1) statements
            A[i] += value;              // n*n statements
        }
    }
}

int main(){
    int x = 5, y = 10;
    swap(x, y);
    cout << "x: " << x << ", y: " << y << endl;
    return 0;
}