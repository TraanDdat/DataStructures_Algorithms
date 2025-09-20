#include<iostream>

using namespace std;

int * printArray(int size)
{
    int *newArr = new int[size];
    for (int i = 0; i < size; i++) {
        newArr[i] = i+1;
    }
    return newArr;
}

void printArray_0(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = i; 
    }
}

void printArray_1(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<sizeof(arr) << endl; // This will not give the expected size of the array
}

void printArray_2(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<sizeof(arr) << endl;
}

int main() {
    int arr[] = {11, 12, 13, 14, 15};
    int *p;
    int size = 5;
    p = printArray(size);
    for(int i = 0; i < size; i++) {
        cout << p[i] << " ";
    }
    cout<<endl;
    printArray_0(arr, 5);
    printArray_1(arr, 5);
    printArray_2(arr, 5);
    return 0;
}