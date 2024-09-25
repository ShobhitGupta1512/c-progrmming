#include<stdio.h>
int main(){
int a,b,res;
char opt;
printf("select an oerator(*,+,-,/)  \n");
scanf("%c",&opt);
printf("enter first number :");
scanf("%d",&a);
printf("enter the second number :");
scanf("%d",&b);
if(opt=='+'){
    res=a+b;
    printf("the sum is %d :",res);
}
else if(opt=='-'){
    res=b-a;
    printf("subtraction of numbers is %d:",res);}
else if(opt=='*'){
   res=a*b;
   printf("multiply of numbers is %d:",res);
}
else if (opt=='/'){
   if(b==0)
   printf("/n divisor can't be zero please enter another value");
   res=a/b;
   printf("division of numbers is %d",res);
}
else
{
    printf("error error errror");
}
return 0;
} 


