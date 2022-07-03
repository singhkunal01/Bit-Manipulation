#include<bits/stdc++.h>
using namespace std;

/*
Explaination:
    We are running a loop from 10 to 0 we can increase this initialisation number 10 based on how many bits can a number have like for int data type it can go till 32 bit

    Now here we are doing ((num >> i) & 1)

    (num >> i) means shifting the bits to right i times

    like if a number is 10 and we want to shift 2 bits right
    i.e. 1010
    then 10 >> 2 => 0011
    
    and after this doing & operation 
    becuase this & operation with 1 and given bit will give 1 when given bit is 1 and vice versa

    So to print number in its binary form 
    we will start from MSB and goes till LSB

    msb
    |
    10010010
           |
          lsb

    lets dry run for 10 (1010)

    lets pad it to 10 bits 0000001010

    Now what we need to print 1st ? 

    ofcourse MSB i.e. 0 so to print that we can right shift this bit at the place of LSB so that we can do & operation with this and 1 because 1 is also present al LSB
    so to do that we will right shift it 9 times
    and we will repeat the process
    ...
    and at last for LSB we need to right shift it 0 times because it is already at the right place for the & operation
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