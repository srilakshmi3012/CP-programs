# CP-programs
**1.Time Estimation**:

**Problem**:
A transportation system has different time estimates based on the weight of the items being transported. Your task is to write a program that:

Takes the weight of an item as input.
Based on the weight, estimates the time required for transportation.
If the weight is above the maximum allowed weight, display an error message.
If the input is invalid (e.g., a non-numeric input), output an error message.
The weight categories are as follows:

If the weight is less than or equal to 2000, the estimated time is 25 minutes.
If the weight is between 2001 and 4000 (inclusive), the estimated time is 35 minutes.
If the weight is between 4001 and 7000 (inclusive), the estimated time is 45 minutes.
If the weight exceeds 7000, print "Maximum capacity reached".

**Algorithm**:
1. Start the program.
2. Declare an integer variable weight to store the weight of the item.
3. Prompt the user to enter the weight of the item.
4. Read the input and store it in the weight variable.
5. Check the value of weight:
   If weight <= 2000, print "time estimate: 25min".
   If weight > 2000 && weight <= 4000, print "time estimate: 35mins".
   If weight > 4000 && weight <= 7000, print "time estimate: 45mins".
   If weight > 7000, print "Maximum capacity reached".
6. Otherwise, print "INVALID OUTPUT".
7. End the program.

**Code**:
```c
#include<stdio.h>
int main() {
	int weight;
	printf("enter weight");
	scanf("%d",&weight);
	if(weight<=2000) {
		printf("time estimate:25min\n");
	}
	else if(weight>=2001 && weight<4000) {
		printf("time estimate:35mins\n");
	}
	else if(weight>4000 && weight<=7000) {
		printf("time estimate:45mins\n");
	}
	else if(weight>7000) {
		printf("Maxmum capacity reached");
	}
	else {
		printf("INVALID OUTPUT");
	}
}
```


**Sample 1**:
```
Input:
Enter weight: 1500

Output:
time estimate: 25min
```

**Sample 2**:
```
Input:
Enter weight: 3500

Output:
time estimate: 35mins
```
**2.Series of multiples**:
**Problem**:
Write a C program that calculates and prints the Nth term of a series based on the given pattern. The series follows these rules:
If the position (N) is odd, the value is determined using the formula: 7 × (N/2)
If the position (N) is even, the value is determined using the formula: 6 × (N/2 - 1)
The program should take an integer input N and output the Nth term of the series.#include <stdio.h>

**Algorithm**:
1. Start the program.
2. Declare integer variables n and x.
3. Prompt the user to enter a number n.
4. Read the input value n from the user.
5.Iterate from i = 1 to n using a loop.
 If i is odd, calculate x = 7 * (n/2).
 If i is even, calculate x = 6 * (n/2 - 1).
6.Print the Nth term of the series.
7.End the program.
	
**Code**:
```c
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
```
**Sample Input and Output**:
```
Input:Enter the number: 5
Output:5 th term :14
```
