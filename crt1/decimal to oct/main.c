#include <stdio.h>
void dtoO(int n){
int oct[32];
int i=0;
if(n==0){
    printf("0");
    return;
}
while(n!=0){
    oct[i]= n%8;
    n/=8;
    i++;
}
for(int k=i-1;k>=0;k--){
    printf("%d",oct[k]);
}
}
int main()
{
int d;
printf("enter value");
scanf("%d",&d);
dtoO(d);
    return 0;
}
