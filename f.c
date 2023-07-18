#include<stdio.h>
void main()
{
        int n,rem,count;
        count=0;
        printf("enter the number n=");
        scanf("%d",&n);
        while(n!=0)
        {
         rem=n%10;
         count++;
         n=n/10;
        }
        printf("%d",count);
}