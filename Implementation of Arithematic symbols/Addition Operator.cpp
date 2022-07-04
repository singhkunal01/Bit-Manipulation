/* This is used to implement the addition arithematic symbol using bit manipulation */
#include <bits/stdc++.h>
using namespace std;


//Addition without using + Operator
int additionUsingBit(int a, int b) {
	int carry;
	while (true) {
		carry = a & b;
		b ^= a;
		a = carry << 1;
		//if carry becomes zero then break
		if (!carry) break;
	}
	return b;//final answer is in the carry variable
}

//main function to use them
int main() {
	int num1, num2;
	cin >> num1 >> num2;
	cout << additionUsingBit(num1, num2) << "\n" ;
}


/*
VISUALIZATION OF ABOVE CODE HOW DOES IT WORK :
Let here a = 3 , b = 2
Now in simple our answer will be ans = a + b = 5.

- But now as i said we can't use addition operator, So the question arise here
that how can we implement this + operator ?

- We use some tricks of XOR and AND operator

 Note - We use here one variable named CARRY so everyone knows what carry is and here also
  carry works in the same way but From CHILDHOOD we get to learn that -
     - If we add two numbers and they produce any carry then where that carry goes HAVE YOU REMEMBERED ?
     - Yes , You think right in the direct left position to those two numbers , In the same way we use carry
     here also.. More explanation will be below.

a = (3) = (0011)
b = (2) = (0010)

------------ NOW THE GAME BEGINS -------------

- In binary when the carry is produced when the two 1's addup then so how can we find that in whole string where , there
can be two 1's by AND(&), so '&' is used to get positions which required carry
  - And if found carry then where that carry will add up ? OBVIOUSLY in the left , thats why in the 3rd line of loop we
  use LEFT SHIFT by 1 position , Hope you get the point behind the AND,LEFT SHIFT and carry, Now come towards WHY XOR ?

- Now why XOR, Let me give you an answer here XOR helps you to add the bits because it gives 1 only when the two bits
are differente but wait if the two bits are '1' then XOR gives us 0 but the answer is '2' , Does it Fails ?
  - Absolutely NO , here the carry helps which we found earlier Thats all about it.. LET GIVE YOU AN EXAMPLE (above one).

This shows the iterations of while loop -

ITERATION 1:
a = 0011 b = 0010

carry = 0010 but carry will add up to the next left position as i told earlier so
b = carry<<1=0010;
a = a ^ b = 0001


- One more  question can be arise to your mind that why we took a = a ^ b not b = a^b and b = carry<<1 not a = carry<<1 ???
So the answer is quite simple - It totally depends you that in the end in which variable you want the final answer you can
take as per your choice

so we have a = 0001 , b = 0100

ITERATION 2:
a = 0001 , b = 0100
again,
carry = 0000
b = carry<<1= 0000
a =0101


Now when the carry becomes 0 just break the loop and the final answer is in 'a'.

so return a = 0101 which is indeed equals to 5 which is required answer.



I HOPE YOU UNDERSTAND ALL THE POINTS , IF STILL YOU HAVE DOUBT PLEASE PING ME.

Thank You
*/