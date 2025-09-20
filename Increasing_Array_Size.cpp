#include<iostream>

using namespace std;

int main(){

    int *p, *q = nullptr;

    p = new int[5]; // Dynamically allocate an array of 5 integers
    for(int i = 0; i < 5; i++) {
        p[i] = i + 1; // Initialize the array with values 1 to 5
        cout << p[i] << " "; // Print the values
    }
    cout << endl;
    q = new int[10]; // Dynamically allocate a larger array of 10 integers
    for(int i = 0; i < 5; i++) {
        q[i] = p[i]; // Copy values from the old array to the new array
        cout << q[i] << " "; // Print the values
    }

    delete p; // Free the memory allocated for the old array
    p = q; // Point p to the new array
    q = nullptr; // Set q to nullptr to avoid dangling pointer

    cout << endl;

    for(int i = 0; i < 5; i++) {
        cout << p[i] << " "; // Print the values
    }

    for(int i = 5; i < 10; i++) {
        p[i] = i + 1; // Initialize the new elements
        cout << p[i] << " "; // Print the values
    }

    return 0;
}