//Reversing and array using Recursion

#include <bits/stdc++.h>
using namespace std;

void Reverse_Array(int i, int arr[], int n){
    if(i >= n/2)
        return;
    swap(arr[i], arr[n-i-1]);
    Reverse_Array(i+1, arr, n);
}

int main(){
    cout << "Enter Length : ";
    int n; cin >> n;

    int arr[n];
    cout << "Enter Array : ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    Reverse_Array(0, arr, n);

    cout << "Reversed Array : ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}