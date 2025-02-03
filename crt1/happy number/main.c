#include <stdio.h>
#include<math.h>
int main()
{
int num,sum,digit,Onum;
printf("enter number");
scanf("%d",&num);
Onum=num;
if(num>=1 &&num<=9){
    if(num==1 || num==7){
        printf("%d is a Happy number",Onum);
    }
    else{
        printf("%d is not a Happy number",Onum);
    }
    return 0;
}
while(num!=1 && num!=4){
    sum=0;
    while(num>0){
        digit=num%10;
        sum+=pow(digit,2);
        num/=10;
    }
    num=sum;
}
if(num==1){
    printf("%d is a happy number\n",Onum);
}
else{
 printf("%d is not a happy number\n",Onum);   
}
    return 0;
}
