#include<stdio.h>
void main()
{
   int n,rem,rev=0,a;
  
   
   printf("enter the number n=");
   scanf("%d",&n);
   a=n;
   while(n!=0)
{
   rem=n%10;
   rev=rev*10+rem;
   n=n/10;
}
   printf("rev %d \n",rev);
  
   if(a==rev)
  {
    printf("palindrome");
  }
    else
  {
    printf("not palindrome ");
  }
}
   
