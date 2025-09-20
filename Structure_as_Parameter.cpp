#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int width;
};

struct Rectangle_1 {
    int Arr[2];
    int Length;
};

struct Rectangle *fun()  // Function returning a pointer to Rectangle
{
    Rectangle *r = new Rectangle; // Dynamically allocate memory for a Rectangle structure
    r->length = 500;
    r->width = 100;
    return r;
}

int area_0(Rectangle r) {
    return r.length * r.width;
}

int area_1(Rectangle* r) {
    r->length = 20; // Example modification to show pointer usage
    r->width = 10; // Example modification to show pointer usage
    return r->length * r->width;
}

int area_2(Rectangle &r) {
    r.length = 20; // Example modification to show reference usage
    r.width = 10; // Example modification to show reference usage
    return r.length * r.width;
}

int area_3(Rectangle_1 r) {
    r.Arr[0] = 50;
    r.Arr[1] = 20; // Example modification to show array usage
    return r.Arr[0] * r.Arr[1];
}

int main() {
    Rectangle rect[]={ {5,10} };
    Rectangle_1 rect1 = { {5, 10}, 2 };
    struct Rectangle *ptr = fun(); // Get pointer to Rectangle from function

    cout << "Length: " << ptr->length << endl;
    cout << "Width: " << ptr->width << endl;

    cout << "Area: " << area_0(rect[0]) << endl;
    cout << "Area: " << area_1(&rect[0]) << endl;
    cout << "Area: " << rect[0].length * rect[0].width << endl;
    cout << "Area: " << area_2(rect[0]) << endl;
    cout << "Area: " << area_3(rect1) << endl;
    cout << "Area: " << rect1.Arr[0] * rect1.Arr[1] << endl;

    return 0;
}