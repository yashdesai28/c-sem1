
//even and odd number sum......123== oddsum=4 and evensum=2

#include<stdio.h>

void main()
{
	int n,rem,evensum=0,oddsum=0;

	printf("enter the number:");
	scanf("%d",&n);

	while(n!=0)
	{
		rem=n%10;

		if(rem%2==0)
		{
			evensum=evensum+rem;
		}
		else 
		{
			oddsum=oddsum+rem;
		}
	
		n=n/10;
	
	}

	printf("evensum==%d\n",evensum);
	printf("oddsum==%d\n",oddsum);

}