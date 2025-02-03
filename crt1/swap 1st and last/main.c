#include <stdio.h>
#include<math.h>
int main()
{
int n;
printf("enter number");
scanf("%d",&n);
int digit=(int)log10(n);
int one=n/pow(10,digit);
int last=n%10;
int swapped=last*pow(10,digit)+(n%(int)pow(10,digit)-last)+one;
printf("%d",swapped);
    return 0;
}
