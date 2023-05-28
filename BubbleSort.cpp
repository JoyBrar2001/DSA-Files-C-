#include <iostream>
using namespace std;

void swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(arr[i] > arr[j])
                swap(&arr[i] , &arr[j]);
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main(){

    cout << "Enter number of elements in an array : " << endl;
    int n; cin >> n;

    cout << "Enter the elements in array : " << endl;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    bubbleSort(arr,n);

    cout << "The array after sorting is : " << endl;
    printArr(arr,n);

    return 0;
}