#include<stdio.h>
void main()
{
      int n1;
  
      printf("enter the number n1=");
      scanf("%d",&n1);
  
      	if(n1==0)
	{
     		 printf("zero");
    	}
  	  else if(n1>0)
   	{
		if(n1%2==0)
		{
      			printf("positive and even");
		}
		else
		{
			printf("positive and odd");
		}
    	}
	else
	{
		if(n1<0)
		{
			printf("negative and odd");
		}
		else
		{
			printf("negative and even");
		}
	}
}

