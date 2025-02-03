#include <stdio.h>
int main()
{
int n;
int arr[10];
scanf("%d",&n);
for(int i=0;i<n-1;i++){
  scanf("%d",&arr[i]);
}
int sum,c=0;
sum=(n*(n+1))/2;
for(int i=0;i<n-1;i++)
{
 c+=arr[i];
}
int b;
b=sum-c;
printf("missing is %d",b);
return 0;
}
