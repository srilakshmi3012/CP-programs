#include <stdio.h>
int valley(long int steps,char *path){
    long int level,i,vcount=0;
    for(i=0;i<steps;i++){
    if(path[i]=='U'){
        level++;
    }
    else if(path[i]=='D'){
        if(level==1){
        vcount++;
    }
        level--;
    }
    }
    return vcount;
}

int main()
{
 long int steps;
 printf("Enter no.of steps");
 scanf("%ld",&steps);
 char path[steps];
 int i,result;
 /*for(int i=0;i<steps;i++){
     scanf("%c",&path[i]);
 }*/
 printf("Enter the path string");
 scanf("%s",path);
 result=valley(steps,path);
 printf("%d",result);
    return 0;
}
