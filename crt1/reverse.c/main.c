/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int num,rev=0,rem;
printf("enter number");
scanf("%d",&num);
while(num!=0){
    rem=num%10;
    rev=rev*10+rem;
    num/=10;
}
printf("reversed num:%d\n",rev);

    return 0;
}