#include<iostream>

using namespace std;

struct Rectangle {
    int length;
    int width;
};
int main() {
    struct Rectangle r={10,5};
    struct Rectangle  r2[2]=
    {
        {20,10},
        {30,15}
    };
    
    cout << "Length: " << r.length << endl;
    cout << "Width: " << r.width << endl;
    cout << "Size of Rectangle struct: " << sizeof(r) << " bytes" << endl;
    cout << "Area: " << r.length * r.width << endl;
    return 0;
}