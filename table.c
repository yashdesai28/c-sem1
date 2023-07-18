#include<stdio.h>
void main()
{
   int n,count;
   count=1;
   printf("enter the number n=");
   scanf("%d",&n);
  
   while(count<=10)
   {
     
      printf("%d and %d is %d \n",n,count,n*count);
      count++;
   }
}