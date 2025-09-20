#include<iostream>

using namespace std;

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partitioning_Position(int Arr[], int l, int h){
    int pivot = Arr[l];
    int i = l, j=h;

    do{
        do{i++;}while(Arr[i] <= pivot);
        do{j--;}while(Arr[j] > pivot);

        if(i<j) Swap(&Arr[i], &Arr[j]);
    }while(i<j);
    Swap(&Arr[l], &Arr[j]);

    return j;
}

void Quick_Sort(int A[], int l, int h){
    int j = 0;
    if(l<h){
        j = Partitioning_Position(A,l,h);
        Quick_Sort(A,l,j);
        Quick_Sort(A,j+1,h);
    }
}

int main(){
    int arr[] = {5, 2, 1, 6, 4, INT16_MAX};
    int l = 0;
    int h = 5;


    Quick_Sort(arr, l, h);
    for(int i = 0; i < h; i++){
        cout << arr[i] << " ";
    }
    return 0;
}