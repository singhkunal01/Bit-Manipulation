#include<bits/stdc++.h>
using namespace std;

/*
Ith bit means ith bit from end
like for 10

            1 0 1 0
bit no. =>  3 2 1 0
LSB (Least Significant Bit 0)
MSB (Most  Significant Bit 3)

So to chec ith bit 
first of all we will have to construct a number in which only ith bit is set
we can do it using (1 << i)

and after that we can do & operation between num and that constructed number
so if ith bit in number is 0 then it will give 0 when doing & operation with 1 and vice versa

Dry Run on 10,1
Num = 10
ith bit = 1

so as you can see in 10 [1010] 1st bit is set so result should be true

so we will construct a number in which we will have only ith bit set by doing (1 << i) right shift by i

So now both numbers are
    1010
    0010
    ----
   &0010

It will give 1 So output will be 1
*/

bool checkForIthBit(int num, int i){
    cout << (1 << i ) << endl;
    if((num & (1 << i)) != 0) return true;
    return false;
}

int main()
{
    int num, i;
    cin >> num >> i;
    if(checkForIthBit(num, i)){
        cout << "SET BIT" << endl;
    }else{
        cout << "NOT SET BIT" << endl;
    }
}