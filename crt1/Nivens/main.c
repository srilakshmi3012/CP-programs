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
