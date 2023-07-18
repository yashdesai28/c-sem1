#include<stdio.h>
void main()
{
        int n;
        int ith=0;
        printf("enter the numbr n=");
        scanf("%d",&n);
        for(int row=1;row<=n;row++)
        {
            for(int cols=1;cols<=n;cols++)
            {
                printf("*");
                ith++;
            }
              printf("%d",ith);
               printf("\n");
        }
}                     