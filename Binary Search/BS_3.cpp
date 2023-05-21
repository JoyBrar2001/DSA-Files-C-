// Number of times array was rotated

#include <bits/stdc++.h>
using namespace std;

int numberOfRotations(int arr[], int n){
    int low = 0, high = n;
    
    while(low <= high){
        if(arr[0] < arr[n]){
            cout << "Already Sorted" << endl;
            return 0;
        }
        else{
            int mid = low + (high-low)/2;

            int next = (mid+1) % n;
            int prev = (mid-1) % n;

            if(arr[mid] < arr[next] && arr[mid] > arr[prev]){
                return n-mid-1;
            }
            else if (arr[low] < arr[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
}

int main(){
    cout << "Enter number of elements : ";
    int n; cin >> n;

    cout << "Enter the array : ";
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "No of rotations are : " << numberOfRotations(arr, n-1) << endl;

    return 0;
}