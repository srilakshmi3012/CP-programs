#include <stdio.h>
int main()
{
int n,num=1;
printf("enter the size");
scanf("%d",&n);
int arr[n][n];
// for(int i=0;i<n;i++){
  //scanf("%d",&arr[i]);
//}
  //for(int i=0;i<n;i++){
  // printf("%d",arr[i]);
  //return 0;
 //}
 int top=0,left=0,bottom=n-1,right=n-1;
 while(top<=bottom && left<=right){
     for(int i=left;i<=right;i++){
        arr[top][i]=num++;
     }
     top++;
     for(int i=top;i<=bottom;i++){
         arr[i][right]=num++;
     }
     right--;
     if(top<=bottom){
         for(int i=right;i>=left;i--){
             arr[bottom][i]=num++;
         }
         bottom--;
     }
     if(left<=right){
         for(int i=bottom;i>=top;i--){
             arr[i][left]=num++;
         }
         left++;
     }
 }
 for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
         printf("%2d  ",arr[i][j]);
     }
     printf("\n");
 }
    return 0;
}
