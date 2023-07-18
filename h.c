#include<stdio.h>
void main()
{
   int n;
   int ram;
   printf("enter the number n=");
   scanf("%d",&n);
   while(n!=0)
{
   ram=n%10;
   printf("%d\n",ram);
   n=n/10;
}
}
   