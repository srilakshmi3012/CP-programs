
#include <stdio.h>

int main()
{
int n;
int maxi=0,num;
printf("enter num");
scanf("%d",&n);
while(n!=0){
     num=n%10;
    if(num>maxi){
        maxi=num;
    }
    n/=10;
}
printf("%d",maxi);
    return 0;
}
