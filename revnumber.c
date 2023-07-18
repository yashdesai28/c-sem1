#include<stdio.h>
void main()
{
       int n,rem,rev;
       printf("enter the number n=");
       scanf("%d",&n);
       while(n!=0)
       {
         rem=n%10;
         rev=rev*10+rem;
         printf("%d\n",rev);
         n=n/10;
         
       }
        
}
