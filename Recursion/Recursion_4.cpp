//Q2 using Backtracking

#include <iostream>
using namespace std;

void func(int i, int n){
    if(i == 0)
        return;
    func(--i,n);
    cout << (i+1) << " ";
}

int main(){
    cout << "Enter N : ";
    int n; cin >> n;
    func(n,n);

    return 0;
}