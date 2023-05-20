#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the length of array : ";
    int n; cin >> n;

    cout << "Enter the array : ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    cout << "How many numbers you want to find : ";
    int q;
    cin >> q;
    while(q--){
        cout << "Enter number whose count you want : ";
        int number; cin >> number;
        
        cout << number << " appears " << hash[number] << " times in the array" << endl;
    }

    return 0;
}