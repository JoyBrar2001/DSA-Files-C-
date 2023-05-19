//Check if string is Palindrome or not

#include <bits/stdc++.h>
using namespace std;

bool Palindrome(int i, string &s){
    if(i >= s.size()/2)
        return true;
    if(s[i] != s[s.size()-i-1])
        return false;
    return Palindrome(i+1, s);
}

int main(){
    cout << "Enter String : ";
    string s; cin >> s;
    Palindrome(0,s) ? cout << "Yes" << endl : cout << "No" << endl;

    return 0;
}