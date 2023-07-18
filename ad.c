#include<stdio.h>
void main()
{
   int j=1;
   int n;
    printf("enter the number n=");
    scanf("%d",&n);
   for(int i=1; i<=n; i++)
  {
    j=i*j;
    printf("%d \n",j);
  }
}