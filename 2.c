#include<stdio.h>
void main()
{
	int n,count,table;
        count=1;
        printf("enter the number n=");
	scanf("%d",&n);
	while(count<=10)
      {
        
        table=n*count;
        printf("%d *%d = %d \n",n,count,table);
        count++;
      }
       
}

        