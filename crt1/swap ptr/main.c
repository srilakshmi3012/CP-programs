#include <stdio.h>
int main()
{
int a,b, *p1, *p2,temp;
printf("enter the values of a & b");
scanf("%d %d",&a,&b);
p1=&a;
p2=&b;
temp=*p1;
*p1=*p2;
*p2=temp;
printf("after swapping:\n");
printf("a=%d:\n",a);
printf("b=%d:\n",b);
    return 0;
}
