/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int num,numO,rem,sum=0;
printf("enter the number");
scanf("%d",&num);
numO=num;
while(num>0){
    rem=num%10;
    int fact=1;
    for( int i=1;i<=rem;i++){
        fact*=i;
    
}
sum+=fact;
num/=10;
}
if(sum==numO){
    printf("%d is a Strong number\n",numO);
}
else{
    printf("%d is not a strong number\n",numO);
}

    return 0;
}