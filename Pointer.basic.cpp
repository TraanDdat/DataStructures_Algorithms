#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main() {
    int *p;
    p= new int[5]; // Dynamically allocate an array of 5 integers

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;

    for(int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << p[i] << endl;
    }
    delete[] p; // Free the dynamically allocated memory
    free(p);
    return 0;
}