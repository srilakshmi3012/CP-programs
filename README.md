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

