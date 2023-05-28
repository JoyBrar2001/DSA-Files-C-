#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter length of array : ";
    int n; cin >> n;
    cout << "Enter the array : ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    map <int,int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    cout << "Map is :" << endl;
    for(auto it: mpp){
        cout << it.first << " -> " << it.second << endl;
    }

    cout << "Enter number of elements you want to find : ";
    int q; cin >> q;
    while(q--){
        cout << "Enter the number : ";
        int number; cin >> number;
        cout << number << " appears " << mpp[number] << " time(s) in array" << endl;
    }
    return 0;
}