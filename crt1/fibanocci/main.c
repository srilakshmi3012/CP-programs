
#include <stdio.h>
int fib(int n){
    if(n==0){
        return 0;
    }
   else if(n==1||n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
 int terms,i;
 printf("enter no.of terms");
 scanf("%d",&terms);
 for(int i=0;i<terms;i++){
     printf("%d ",fib(i));
 }
printf("\n");
    return 0;
}
