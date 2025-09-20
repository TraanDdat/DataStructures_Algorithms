#include<iostream>
 
using namespace std;

void Insertion_Sort(int A[], int n)
{
    for(int i = 1; i < n ; i++)
    {
        int x = A[i];
        int j = i - 1;
        while(j>-1 && A[j] > x)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}

int main()
{
    int arr[]={8,5,7,3,2};
    int n=5;

    Insertion_Sort(arr,n);
    for(int x:arr)
        cout << x << " ";

    return 0;
}