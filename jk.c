#include<stdio.h>
void main()
{
   int n;
   char ch='a';
   printf("enter the number n=");
   scanf("%d",&n);
   for( int rows=1;rows<=n;rows++)
   {
     for( int cols=1;cols<=n;cols++)
     {
       printf("%c",ch);
       ch++;
     }
      printf("\n");
   }
}