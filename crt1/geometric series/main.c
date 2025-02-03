#include <stdio.h>
#include<math.h>
int main()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  if(n%2==1){
   int term=pow(2,n/2);
   printf("the %dth term is: %d\n",n,term);
  }
  else{
      int term=pow(3,(n/2)-1);
      printf("the %dth term is: %d\n", n,term);
  }

    return 0;
}