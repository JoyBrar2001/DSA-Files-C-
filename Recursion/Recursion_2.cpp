//Print Linearly from 1 to N

#include <iostream>
using namespace std;

void func(int i, int n){
    if(i > n)
        return;
    cout << i << " ";
    func(++i, n);
}

int main(){
    cout << "Enter N : ";
    int n; cin >> n;
    func(1,n);

    return 0;
}