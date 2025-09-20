#include<iostream>

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n;
    cout<<"Enter Size";
    cin>>n;
    int B[n];
    int A[5];

    B[0] = 10;
    
    for(int x:B) // Run x in B array - element by element
    {
        cout<<x<<endl;
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    A[0] = 10;
    A[1] = 20;
    A[2] = 30;
    A[3] = 40;
    A[4] = 50;

    cout << sizeof(A) << endl; // This will print the size of the array A in bytes
    cout << A[1] << endl; // This will print the second element of array A
    printf("%d\n",A[2]);



    return 0;
}