#include<stdio.h>
void main()
{
   int n,count=1,oddsum=0,evensum=0;
   printf("enter the number n=");
   scanf("%d",&n);
   
   while(count <=n)
   {
      if(count % 2==0)
      { 
         evensum=evensum+count; 
      }
      else
      {
        oddsum=oddsum+count;
      }
       
   }
    printf("odd sum= %d \n",oddsum);
    printf("even sum=%d \n",evensum);
}