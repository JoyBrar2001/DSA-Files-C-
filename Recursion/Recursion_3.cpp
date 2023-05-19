//Print from N to 1 recursively

#include <iostream>
using namespace std;

void func(int i, int n){
    if(i == 0)
        return;
    cout << i << " ";
    func(--i, n);
}

int main(){
    cout << "Enter N : ";
    int n; cin >> n;
    func(n,n);

    return 0;
}