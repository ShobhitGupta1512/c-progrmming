#include<stdio.h>
int main(){
    int i=2,n;
    printf("enter the value n:");
    scanf("%d",&n);
    printf("number from 2 to %d are :\n",n);
    while(i<=n)
    {
        printf("%d\n",i);
        i+=2;   //i=i+2
    }
   
    return 0;
}