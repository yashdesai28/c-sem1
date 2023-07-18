#include<stdio.h>
void main()
	{
		int n[10];
		int size;
		int i;
		printf("Enter the array size=");
		scanf("%d",&size);

		for (i=0;i<=size-1;i++)
		{
		printf("Enter value at n[%d]=",i);
		scanf("%d",&n[i]);
		}
		
		for(i=0;i<=size-1;i++)
		{
		printf("b[%d]=%d\n",i,n[i]);
		}
		for(i=0;i<=size-1;i++)
		{
		printf("b[%d]=%d\n",i,n[i]);
		}
	}