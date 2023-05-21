#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int low, int high, int num){
    while(low <= high){
        int mid = low + (high - low)/2;

        if(num == arr[mid]){
            return mid;
        }
        else if(num < arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

    int num; cin >> num;

    cout << BinarySearch(arr ,0 ,9 ,num) << endl;

    return 0;
}