#include <stdio.h>
int main()
{
	int n,x;
	printf("enter the number");
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		if(i%2!=0) {
			x=7*(n/2);
		}
		else {
			x=6*(n/2 -1);
		}}
		printf("%d th term :%d\n",n,x);
		return 0;
	}