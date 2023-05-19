//Fibbonaci Series using Recursion

#include <iostream>
using namespace std;

int Fibbonaci(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return Fibbonaci(n-1) + Fibbonaci(n-2);
}

int main(){
    cout << "Enter N : ";
    int n; cin >> n;
    cout << Fibbonaci(n);

    return 0;
}