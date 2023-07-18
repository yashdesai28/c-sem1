#include<stdio.h>
void main()
{
   int n,c,s;

   printf("enter the number n=");
   scanf("%d",&n);
   while(c<=n)
  {
    s=c*c;
    printf("%d\n",s);
    c++;
  }
}