#include<stdio.h>
void main()
{
   int n,tem;
  
   printf("enter the number n=");
   scanf("%d",&n);
    tem=n;
   for( int rows=1;rows<=n;rows++)
   {
     for( int cols=1;cols<=n;cols++)
     {
       printf("%d",tem); 
       tem--;
      
     }
      printf("\n");
   }
}