#include<iostream>
using namespace std;

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Selection_Sort(int A[], int n){
    int i, k ,j = 0;

    for(i = 0; i < n; i++){
        for(j=k=i; j < n; j++){
            if(A[j] < A[k]){
                k = j;
            }
        }
        swap(A[i], A[k]);
    }
}

int main(){
    int arr[] = {5, 2, 3, 4, 1};

    Selection_Sort(arr, 5);
    for(int x:arr)
        cout<<x<<" ";
    return 0;
}