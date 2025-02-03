#include <stdio.h>
int main()
{
  int n;
  double sum=0.0;
  printf("enter number");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
      int nr=1;
      int dr=1;
      for(int j=1;j<=i;j++){
          dr*=j;
          
      }
      sum+=(double)i*i/dr;
  }
  printf("%lf",sum);
    return 0;
}
