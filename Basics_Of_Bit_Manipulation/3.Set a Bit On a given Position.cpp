#include<bits/stdc++.h>
using namespace std;

// this program is to set the bit at a given position and print the final output

/*
Same as the Problem 2. Check bit where we are masking by doing 1<<pos to shift the 1 by these position
from Least Significant Bit  there we need to print the bit is set or not for that we need to use
LOGICAL AND which has a property to find that because it true only when both the bits are set otherwise
it is false.

Now, come to out point here we have to set the bit at the given position so we can do that by replacing
the LOGICAL AND by LOGICAL OR.

Example :

let num = 10 , in binary = 1010 in 8 bit representation = 00001010
now pos = 2 we have to se the bit at 2nd position means 3rd from the right.

required num = 00001010

-> now find a  mask same as the last question.
- mask = 1<<pos = 1<<2=00000100

now in the end find the  (n| mask) which is our final answer , let me show you -

n = 00001010
mask = 00000100
n|mask =00001110
hence you see that we set the bit at the given position and the answer is 14.

Let us code Now...

*/


int setBitAtIthPosition(int n, int pos) {
	int mask = 1 << pos;
	return (n | mask);
}

int main() {
	int num, pos;
	cin >> num >> pos;
	cout << setBitAtIthPosition(num, pos) << "\n";
	return 0;
}