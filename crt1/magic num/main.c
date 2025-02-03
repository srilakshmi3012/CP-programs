#include <stdio.h>
int main()
{
int num,sum,digit,Onum;
printf("enter number");
scanf("%d",&num);
Onum=num;
while(num>=10){
    sum=0;
    while(num>0){
        digit=num%10;
        sum+=digit;
        num/=10;
        
    }
    num=sum;
}
if(num==1){
    printf("%d num is magic",Onum);
}
else{
    printf("%d num is not magic",Onum);
}

    return 0;
}
