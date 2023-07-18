




/* 
written by vatsal mangukiya

find minimum number from array

*/

#include<stdio.h>
void main()
{
	int i;
	printf("plese enter array size");
	scanf("%d",&i);
	int num[i];
	
	//input
	for(int j=0;j<i;j++)
	{
		printf("element %d =",j);
		scanf("%d",&num[j]);
	}
	int min;
	for(int k=0;k<i;k++)
	{
		if(min>num[k])
		{
		min=num[k];
		}
	
	}
	printf("%d",min);

}
