#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, *ptr;
    printf("enter total no of values");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof (int));
    ptr = (int *)calloc(n , sizeof (int));
    printf("enter values:");
    for (i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", (ptr + i));
    }
    printf("enter values are:");
    for (i = 0; i < n; i++)
    {
        /* code */
        printf("%d \t", *(ptr + i));
    }
    free(ptr);
    return 0;
}
