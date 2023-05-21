// First and last occourance + count as well

#include <bits/stdc++.h>
using namespace std;

int firstOccourance(int arr[], int low, int high, int num){
    while (high >= low){
        int mid = low + (high-low)/2;

        if(num == arr[mid]){
            while(true){
                if(arr[mid-1] == num){
                    mid = mid-1;
                }
                else{
                    return mid;
                }
            }
        }
        else if(num < arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
}

int lastOccourance(int arr[], int low, int high, int num){
    while (high >= low){
        int mid = low + (high-low)/2;

        if(num == arr[mid]){
            while(true){
                if(arr[mid+1] == num){
                    mid = mid+1;
                }
                else{
                    return mid;
                }
            }
        }
        else if(num < arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
}

int main(){
    cout << "Enter length of array : ";
    int n; cin >> n;

    cout << "Enter array : ";
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter element : ";
    int num; cin >> num;

    cout << "First occourance is at index : " << firstOccourance(arr, 0, n, num) << "\nAnd last occourance is at index : " << lastOccourance(arr, 0, n, num) << endl;

    cout << "No of times it occours is : " << lastOccourance(arr, 0, n, num) - firstOccourance(arr, 0, n, num) + 1 << endl;

    return 0;
}