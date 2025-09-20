#include<iostream>
using namespace std;

int main() {
    int a=10;
    int &r = a;
    int b = 20;

    cout << "Value of a: " << a << endl;
    cout << "Reference r: " << r << endl;

    r++;

    cout << "After incrementing r, value of a: " << a << endl;
    cout << "Reference r after increment: " << r << endl;

    r=b;

    cout << "After assigning b to r, value of a: " << a << endl;
    cout << "Reference r after assignment: " << r << endl;

    return 0;
}