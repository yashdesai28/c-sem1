#include<stdio.h>
void main()
{
    int n;
    int rme;
    int sum;
    printf("enter the number=");
    scanf("%d",&n);
    while(n!=0)
    {
       rme=n%10;
       sum=sum+rme;
       n=n/10;
       
    }
       printf("%d",sum);
}