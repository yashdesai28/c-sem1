#include<stdio.h>
void main()
{
   int n,rem,count,as,sum;
   count=0;
   printf("enter the number n=");
   scanf("%d",&n);
   while(n!=0)
   {
     rem=n%10;
     
      
      n=n/10;
      count++;
   }
   
    while(n!=0)
   {
    rem=n%10;
    as=as+(rem*count);
    n=n/10;
   }
    printf("%d\n",as);
}