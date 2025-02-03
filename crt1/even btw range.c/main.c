/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int n,m;
 int count=0;
  printf("enter initial");
  scanf("%d",&n);
  printf("enter final");
  scanf("%d",&m);
  for(int i=n;i<m;i++){
      if(i%2==0){
          printf("number %d is even\n",i);
          count++;
      }
  }
  printf("no.of even's %d\n",count);
    return 0;
}
