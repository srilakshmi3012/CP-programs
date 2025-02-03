#include <stdio.h>
int main()
{
int n;
printf("no.of elements");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);}
int d;
printf("enter d value");
scanf("%d",&d);
// int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<d;i++){
    int first=arr[0];
    for(int j=0;j<n;j++){
        arr[j]=arr[j+1];
    }
    arr[n-1]=first;
}
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
    return 0;
}
