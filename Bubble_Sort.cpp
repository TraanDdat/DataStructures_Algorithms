#include<iostream>

using namespace std;

void bubble_sort(int A[], int n)
{
    int flag = 0;
    for(int i = 0; i < (n-1); i++)
    {
        flag = 0;
        for(int j = 0; j < (n-1-i); j++)
        {
            if(A[j] > A[j+1])
            {
                swap(A[j],A[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
}

void swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int array[]={8,3,5,3,2,9,1};

    bubble_sort(array,7);

    for(int x:array)
    cout << x << " " << endl;

    return 0;
}