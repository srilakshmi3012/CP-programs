#include <stdio.h>
int main()
{
int n;
printf("Enter the no.of elements");
scanf("%d",&n);
if(n<2){
    printf("array must contain atleast 2 elements \n");
    return 0;
}
int arr[n];
printf("enter %d the elements:\n",n);
for(int i=0;i<=n;i++){
scanf("%d",&arr[i]);
}
int maxi=arr[0];
int max2=-1;
for(int i=1;i<n;i++){
if(arr[i]>maxi){
    max2=maxi;
maxi=arr[i];
}
else if(arr[i]>max2 && arr[i]!= maxi){
    max2=arr[i];
}
}
if(max2 == -1){
printf("no second largest");
}
else{
    printf("The second largest element is %d \n",max2);
}

   return 0;
}