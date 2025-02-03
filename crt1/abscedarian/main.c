#include <stdio.h>
#include<string.h>
//int string(char s1[], char s2[]){
 //for (int i = 0; s1[i] != '\0'; i++) {
   //     printf("Character at position %d: %c\n", i, s1[i]);
    //}
 //  for(int i=0;i<s1[i] && s2[i];i++) {
   //  strcat(s1[i],s2[i]);
     //printf("combined string:%d",s1);
   //}
//}
int main()
{
 char s1[100],s2[100];
 char out[100];
printf("Enter the first string" );
scanf("%s",s1);
printf("enter second string");
scanf("%s",s2);
 for (int i = 0; i<strlen(s1); i++) {
snprintf(out,sizeof(out),"%c%s ",s1[i],s2);
printf("%s",out);
  }
printf("\n");
 return 0;
}
