#include <stdio.h>
int main()
{
    int i;
    int a[10], sum = 0;
    printf("enter number:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    printf("\nsum of array Number is %d", sum);
    return 0;
}