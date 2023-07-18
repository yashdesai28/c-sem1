#include<stdio.h>
void main()
{
        int n,tem; 
        printf("enter the numbr n=");
        scanf("%d",&n);
        tem=n;
        for(int row=1;row<=n;row++)
        {
            for(int cols=1;cols<=tem;cols++)
            {
                printf("");
               

            }
             tem--; 
            for(int row1=1;row1<=n;row1++)
           {
            for(int cols1=1;cols1<=tem;cols1++)
            {
                printf(" * ");
               

            }
             tem--;
             printf("\n\n");
            }
    
      }
}        