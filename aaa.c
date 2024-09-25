#include<stdio.h>
int main()
{
    int i,n,sum=0,count=0,height[100];
    float avg;
    printf("enter the number of persons:");
    scanf("%d",&n);
    printf("\nEnter the height of each person in centimeter");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&height[i]);
        sum=sum+height[i];
        /* code */
    }
    avg=(float)sum/n;
    for ( i = 0; i < n; i++)
    if(height[i]>avg)
    count++;
    printf("\naverage height of %dpersons is %.2f",n,avg);
    return 0;
}
