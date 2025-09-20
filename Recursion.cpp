#include <iostream>
using namespace std;

// Time Complexity: O(n)
void printNumbers(int n) {  // Statements - n
    if(n>0){                // Statements - 1
    cout << n << " ";       // Print before the recursive call - descending order - Statements - 1
    printNumbers(n - 1);    // Base case - when n is 0 - Statements - n-1
    cout << n << " ";       // Print again after the recursive call - ascending order
    }
}

int main() {
    int n = 5;
    printNumbers(n);
    return 0;
}