#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    int *p;
    int *q;
    p=&a;
    q=&b;
    // int c=*q;
    *p=20;
    printf("value of a =%d\n",a);
    printf("a=%d\n",*p);
    printf("adress of a=%x\n",&p);
    // printf("c=%x\n",c);
    printf("c=%d\n",a);
    printf("%x\n=",p);
    return 0;
}