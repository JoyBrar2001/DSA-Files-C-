//Print name N times using recursion

#include <iostream>
using namespace std;

void func(int n){
    if(n == 0)
        return;
    cout << "Name" << endl;
    func(--n);
}

int main(){
    cout << "Enter N : ";
    int n; cin >> n;

    func(n);

    return 0;
}