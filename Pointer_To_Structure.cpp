#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle {
    int length;
    int width;
};

int main() {
    //struct Rectangle r = {10, 5}; // in C
    Rectangle r = {10, 5}; // in C++
    Rectangle* ptr = &r; // Pointer to the structure
    Rectangle *p;
    //p=(struct Rectangle*)malloc(sizeof(struct Rectangle)); // In C; Dynamically allocate memory for a Rectangle structure
    p = new Rectangle; // Dynamically allocate memory for a Rectangle structure in C++

    p->length = 20;
    p->width = 10;

    cout << "Length: " << p->length << endl;
    cout << "Width: " << p->width << endl;

    // Accessing structure members using pointer
    cout << "Length: " << ptr->length << endl;
    cout << "Width: " << ptr->width << endl;

    cout << "Length: " << r.length << endl;
    cout << "Width: " << r.width << endl;
    cout << "Size of Rectangle struct: " << sizeof(r) << " bytes" << endl;
    cout << "Area: " << r.length * r.width << endl;



    return 0;
}