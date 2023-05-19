//Sum of first N Numbers and factorial

#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n == 0)
        return 0;
    else
        return n + sum(n-1);
}

int fact(int n){
    if(n == 1 || n== 0)
        return 1;
    else
        return n * fact(n-1);
}

int main(){
    cout << "Enter N : ";
    int n; cin >> n;
    cout << "Sum is " << sum(n) << endl;
    cout << "Factorial of " << n << " is " << fact(n) << endl;

    return 0;
}