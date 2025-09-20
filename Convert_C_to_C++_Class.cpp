#include<iostream>
using namespace std;

/* C Programming*/

/* 
struct Rectangle_C {
    int length;
    int width;
};

void Initialize_C(Rectangle_C &r, int l, int w) {
    r.length = l;
    r.width = w;
}

int area_C(Rectangle_C &r) {
    return r.length * r.width;
}

void modify_C(Rectangle_C &r, int newLength, int newWidth) {
    r.length = newLength;
    r.width = newWidth;
}

int main() {
    Rectangle_C r_C;

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
*/

/* C++ Programming */
class Rectangle
{
    private: 
    int length;
    int width;

    public:
    int length_public;
    int width_public;
    Rectangle(int l, int w) {
        length = l;
        width = w;
        length_public = length;
        width_public = width;
    }

    int area() {
        return length * width;
    }

    void modify(int newLength, int newWidth) {
        length = newLength;
        width = newWidth;
    }
};

int main() {
    Rectangle r(10, 5);

    // cout<< "Length " << r.length << "Width: " << r.width <<endl; Can not access to private data
    cout << "Length: " << r.length_public << endl;
    cout << "Width: " << r.width_public << endl;
    cout << "Area: " << r.area() << endl;
    r.modify(20, 10);
    cout << "Area: " << r.area() << endl;

    return 0;
}   