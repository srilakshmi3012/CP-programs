//recursion
#include <stdio.h>
void head(int n) {
	if(n==0)
		return;
	head(n-1);
	printf("%d ",n);
}
void tail(int n) {
	if(n==0)
		return;
	printf("%d ",n);
		tail(n-1);
}	
int main()
{
	head(6);
	printf("\n");
	tail(6);
	return 0;
}
/*tail recursion
#include <stdio.h>
	printf("%d",n);
int main()
{
	head(6);
	return 0;
}*/