#include <iostream>
using namespace std;

void swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) { 
    int i, j, min; 
    // One by one move boundary of 
    // unsorted subarray 
    for (i = 0; i < n-1; i++){
        min = i; 
        for (j = i+1; j < n; j++){
          if (arr[j] < arr[min]) 
              min = j;
        }
        if (min!=i)
            swap(&arr[min], &arr[i]);
    }
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
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(arr,n);

    cout << "The array after sorting is : " << endl;
    printArr(arr,n);

    return 0;
}