#include<stdio.h>
int main()
        {
                int size;
                int max=0;
               // int min;
                int sum=0;
                int A[100];
                int avg;
                int i;

                printf("Enter the array size:- ");
                scanf("%d",&size);

                printf("===========================\n");

                for(int i=0;i<=size-1;i++)
                {
                        printf("Enter the value at A[%d]=",i);
                        scanf("%d",&A[i]);
                }

                printf("===========================\n");

                for(int i=0;i<=size-1;i++)
                {
                        if(A[i]>max)
                        {
                                max=A[i];
                        }
                }
                        printf("Maximum = %d\n",max);


                printf("===========================\n");

                	int min;
		for(int j=0;j<size;j++)
		{
			 if(A[j]<min)
			{
				min=A[j];
			}
	
		}
	
                        printf("Minimum = %d\n",min);

                printf("===========================\n");


                for(i=0;i<=size-1;i++)
                {
                        sum=sum+A[i];

                }
                        avg=sum/i;

                        printf("Sum of an array= %d \n",sum);

                        printf("===========================\n");
                        printf("Average of an array= %d",avg);
		return 0;
        
}