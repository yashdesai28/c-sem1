#include<stdio.h>
void main()
{
     int size;
     int i;
     int a[100];
     int sum=0;
     int avg=0;
     int min;
     printf("enter the arry size=");
     scanf("%d",&size);
     for( i=0;i<size;i++)
     {
         printf("arry value  a[%d]",i);
         scanf("%d",&a[i]);
         sum=sum+a[i];
     }
         avg=sum/i;
         printf("avg %d\n",avg);
         printf("sum %d\n",sum);
   for(int i=0;i<size;i++)
   {
	if(a[i]<min)
	
	   min=a[i];
	
   }
	  printf("Minimum = %d\n",min);
}
     
     