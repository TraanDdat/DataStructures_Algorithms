#include<iostream>

using namespace std;

void Swap_GetAddress(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Swap_GetReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 10, num2 = 20;
    int num3 = 10, num4 = 20;

    Swap_GetAddress(&num1, &num2);
    Swap_GetReference(num3, num4);

    cout << "After swapping: " << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    cout << "After swapping: " << endl;
    cout << "num3: " << num3 << endl;
    cout << "num4: " << num4 << endl;

    return 0;
}   