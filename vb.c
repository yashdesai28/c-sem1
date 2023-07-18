
#include<stdio.h>
void main()
	{
		int n[10];
		int size;
		int i;
                int min;
               
		printf("Enter the array size=");
		scanf("%d",&size);

		for (i=0;i<=size-1;i++)
		{
		printf("Enter value at n[%d]=",i);
		scanf("%d",&n[i]);
		}
		for(int k=0;k<size;k++)
	{
		if(min>n[i])
		{
		min=n[i];
		}
	
	}
	printf("%d",min);
}