#include <stdio.h>

void main()
{
	int size;
	int a[100];
	int i;	
	int seach;
	int flage=0;
	int count=0;

	printf("enter the size of array :");
	scanf("%d",&size);

	for( i=0 ; i<size ; i++ )
	{
	   printf("enter the number of a[%d] =",i);
	   scanf("%d",&a[i]);
	}

	printf("enter the seach ele :");
	scanf("%d",&seach);
	
	for( i=0 ; i<size ; i++ )
	{
		if(seach==a[i])
		{
		flage=1;
		count++;
		}
	}	

	if(flage==1)
	{
	   printf("found\n");
	}
	else
	{
	   printf("not-found");
	}
	
	printf("array %d time",count);	

}





