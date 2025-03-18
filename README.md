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
**3.Anagrams**:

 **Problem**:
Write a C program to check whether two given strings are anagrams of each other.
Two strings are anagrams if they contain the same characters in the same frequency but in a different order.
The program should take two strings as input and determine whether they are anagrams.

**Algorithm**:
1.Start the program.
2.Declare a function isanagram(char s1[], char s2[]) that checks if two strings are anagrams.
3.Inside the function:
  Create an integer array c[256] initialized to zero to store character frequencies.
  If the lengths of s1 and s2 are not the same, return false.
  Traverse both strings simultaneously:
    Increment the count for characters in s1.
    Decrement the count for characters in s2.
  If all values in the frequency array remain zero, return true (they are anagrams). Otherwise, return false.
4.In the main() function:
  Take input for two strings from the user.
  Call the isanagram() function with the input strings.
5.Print "Both are anagrams" if the function returns true, otherwise print "Not anagrams".
6.End the program.
**Code**:
```c
#include <stdio.h>
#include<string.h>
#include<stdbool.h>
bool isanagram(char s1[], char s2[]){
    int c[256]={0};
    int i;
    if(strlen(s1)!=strlen(s2)){
        return false;
    }
    for(i=0;i<s1[i] && s2[i];i++){
        c[(int)s1[i]]++;
         c[(int)s2[i]]--;
    }
    for(i=0;i<256;i++){
        if(c[i]!=0){
        return false;
    }
    }
    return true;
}
int main()
{
char s1[100],s2[100];
printf("Enter the first string" );
scanf("%s",s1);
printf("enter second string");
scanf("%s",s2);
if(isanagram(s1,s2)){
    printf("both are anagrams");
}
else{
    printf("Not anagrams");
}
    return 0;
}
```
**Sample**:
```
Input:
Enter the first string: listen
Enter the second string: silent
Output:
Both are anagrams
```
**4.Nives number**:
 
 **Problem**:
Write a C program to check whether a given number is a Niven number or not.
  A Niven number (also known as a Harshad number) is a number that is divisible by the sum of its digits.
  The program should take an integer input and determine whether it is a Niven number.
**Algorithm**:
1.Start the program.
2.Declare variables n (input number), sum (sum of digits), and num (to store individual digits).
3.Take input from the user (n).
4.Compute the sum of the digits of n:
  Extract each digit using n % 10.
  Add it to sum.
  Reduce n using n = n / 10.
5.Check if the original number is divisible by sum:
  If original_number % sum == 0, print "Niven Number".
  Otherwise, print "Not a Niven Number".
6.End the program.
**Code**:
```c
#include <stdio.h>
int main()
{
int n,sum=0,num,num1;
printf("enter number");
scanf("%d",&n);
num1=num;
while(n>0){
   num=n%10;
   sum+=num;
   n/=10;
   if(num%sum==0){
       printf("%d Nivens number\n",num);
   }
   else{
       printf("%d not Nivens\n",num);
   }
}
    return 0;
}
```
**Sample Input and Output**:
```c
Input:Enter a number: 18
Output:18 is a Niven Number
```
**5.Abscedarian**:

 **Problem**:
Write a C program that takes two strings as input and combines them by interleaving characters from the first string with the second string.
**Algorithm**:
1.Start the program.
2.Declare three character arrays:
  s1 (first string)
  s2 (second string)
  out (output string)
3.Take input for s1 and s2 from the user.
4.Iterate through each character of s1:
  Use snprintf(out, sizeof(out), "%c%s ", s1[i], s2); to concatenate each character of s1 with s2.
  Print the result.
5.Print a newline for formatting.
6.End the program.
**Code**:
```c
#include <stdio.h>
#include<string.h>
int main()
{
 char s1[100],s2[100];
 char out[100];
printf("Enter the first string" );
scanf("%s",s1);
printf("enter second string");
scanf("%s",s2);
 for (int i = 0; i<strlen(s1); i++) {
snprintf(out,sizeof(out),"%c%s ",s1[i],s2);
printf("%s",out);
  }
printf("\n");
 return 0;
}
```
**Sample Input and Output**:
```c
Input:
Enter the first string: abc
Enter the second string: xyz
Output:
axyz bxyz cxyz
```
