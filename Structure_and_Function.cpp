#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int width;
};

void Initialize_C(Rectangle &r, int l, int w) {
    r.length = l;
    r.width = w;
}

int area_C(Rectangle &r) {
    return r.length * r.width;
}

void modify_C(Rectangle &r, int newLength, int newWidth) {
    r.length = newLength;
    r.width = newWidth;
}

int main() {
    Rectangle r_C;

    Initialize_C(r_C, 10, 5); // Assuming Initialize is a function that sets length and width
    area_C(r_C); // Assuming area is a function that calculates the area of the rectangle

    cout << "Length: " << r_C.length << endl;
    cout << "Width: " << r_C.width << endl;
    cout << "Size of Rectangle struct: " << sizeof(r_C) << " bytes" << endl;
    cout << "Area: " << area_C(r_C) << endl;

    modify_C(r_C, 20, 10); // Assuming modify is a function that changes the dimensions of the rectangle
    area_C(r_C); // Recalculate area after modification

    cout << "After modification:" << endl;
    cout << "Length: " << r_C.length << endl;
    cout << "Width: " << r_C.width << endl;
    cout << "Area: " << area_C(r_C) << endl;

    return 0;
}