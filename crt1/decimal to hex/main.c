#include <stdio.h>
void dtoh(int n){
int hex[32];
int i=0;
if(n==0){
    printf("0");
    return;
}
while(n!=0){
    int r= n%16;
    if(r<10){
        hex[i]=r+'0';
    }else{
        hex[i]=r-10+'A';
    }
    n/=16;
    i++;
}
for(int k=i-1;k>=0;k--){
    printf("%c",hex[k]);
}
}
int main()
{
int d;
printf("enter value");
scanf("%d",&d);
dtoh(d);
    return 0;
}
