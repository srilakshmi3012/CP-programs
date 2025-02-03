#include <stdio.h>
int main()
{
int num;
printf("enter number");
scanf("%d",&num);
double sum=0.0;
int nume=1;
int den=2;
for(int i=0;i<num;i++){
sum+=(double)nume/den;
nume+=2;
den+=2;
}
printf("%lf ",sum);
    return sum;
}
