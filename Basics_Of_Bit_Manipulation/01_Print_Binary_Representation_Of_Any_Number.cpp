#include<bits/stdc++.h>
using namespace std;

/*
Explaination
num >> i => right shift by i bits
5 >> 2
5 => 101
(5 >> 2) => 001

1&1 => 1
1&0 => 0

so if ith bit is 0 (num>>i)&1 => 0
&  if ith bit is 1 (num>>i)&1 => 1

*/
void printBinary(int num){
    for(int i = 10; i >= 0; i--){
        cout << ((num >> i)&1);
    }
    cout << endl;
}

int main()
{
    cout << "Enter the number to print its binary form : ";
    int n; cin >> n;
    printBinary(n);
    return 0;
}