#include <stdio.h>
int main()
{
 int n,i;
 printf("enter no.of elements");
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);}
if(n==0 || n==1){
  printf("array after removing duplicates");
  for(int i=0;i<n;i++){
  printf("%d",arr[i]);
  return 0;
 }
 }
 int j=0;
 for(int i=0;i<n;i++){
if (arr[i] != arr[i+1]) {
arr[j++] = arr[i];}}
// arr[j++]=arr[n-1];
 
 printf("Ater removing duplicates");
 for(int i=0;i<j;i++){
  printf("%d",arr[i]);
 }
    return 0;
}
