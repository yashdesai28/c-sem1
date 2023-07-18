#include<stdio.h>
void main()
{
   int n,count,sum;
   sum=1;
   
   
   printf("enter the number n=");
   scanf("%d",&n);
   count=n;
   while(0<count)
  {
    printf("%d\n",count);
    sum=sum*count;
    count=count-1;
  }
   printf("==================\n");
    printf("%d\n",sum);
}