#include<stdio.h>
void main()
{
   int n,es,od,rem;
   es=0;
   od=0;
   printf("enter the number n=");
   scanf("%d",&n);
   while(n!=0)
{
   rem=n%10;
   if(rem %2 ==0)
  {
    es=es+rem;
  }
   else
   {
     od=od+rem;
   }
     n=n/10;
}
   printf("%d\n",es);
   printf("%d\n",od);
}
   