//Using hashing, find out the element with the highest frequency and the lowest frequency

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    map<int,int> hash;
    for(int i = 0; i < n; i++) hash[arr[i]]++;

    for(auto it: hash){
        cout << it.first << "->" << it.second << endl;
    }

    int max_freq = 0, ele_max, min_freq = INT_MAX, ele_min;
    for(auto it: hash){
        if(it.second > max_freq){
            max_freq = it.second;
            ele_max = it.first;
        }
        if(it.second < min_freq){
            min_freq = it.second;
            ele_min = it.first;
        }
    }

    cout << "Highest Frequency is : " << max_freq << " and the element is : " << ele_max << endl;
    cout << "Lowest Frequency is : " << min_freq << " and the element is : " << ele_min << endl;

    return 0;
}