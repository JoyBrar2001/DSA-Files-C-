#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the string : ";
    string s; cin >> s;

    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++){
        hash[s[i] - 'a']++;
    }

    cout << "Enter number of characters you want to find : ";
    int q; cin >> q;
    while(q--){
        cout << "Enter Character : ";
        char c; cin >> c;

        cout << "The character " << c << " appears " << hash[c-'a'] << " time(s) in the array" << endl;
    }
    
    return 0;
}