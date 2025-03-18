**Statement**:
Write a C program that calculates and prints the Nth term of a series based on the given pattern. The series follows these rules:
If the position (N) is odd, the value is determined using the formula: 7 × (N/2)
If the position (N) is even, the value is determined using the formula: 6 × (N/2 - 1)
The program should take an integer input N and output the Nth term of the series.#include <stdio.h>

**Algorithm**:
1.Start the program.
2.Declare integer variables n and x.
3.Prompt the user to enter a number n.
4.Read the input value n from the user.
5.Iterate from i = 1 to n using a loop.
 If i is odd, calculate x = 7 * (n/2).
 If i is even, calculate x = 6 * (n/2 - 1).
6.Print the Nth term of the series.
7.End the program.
	
**Code**:
	
int main()
{
int n,x;
printf("enter the number");
scanf("%d",&n);
for(int i=1; i<=n; i++) {
if(i%2!=0) {
x=7*(n/2);
}
else {
x=6*(n/2 -1);
}}
printf("%d th term :%d\n",n,x);
return 0;
}

**Sample Input and Output**:
Test Case 1:
Input:Enter the number: 5
Output:5 th term :14
