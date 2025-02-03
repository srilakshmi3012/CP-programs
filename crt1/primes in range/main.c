#include<stdio.h>
int isprime(int num){
    if(num<=1){
        return 0;
    }
    else{
     int i=2;
     while(i*i<=num){
         if(num%i==0){
             return 0;
         }
         i++;
         
     }
     return 1;
    }
}
int main(){
int n,m;
printf("Enter n and m");
scanf("%d%d",&n,&m);
for(int i=n;i<=m;i++){
    if(isprime(i)){
    printf("%d ",i);
    }
}
return 0;
}
