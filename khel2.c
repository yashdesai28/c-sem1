#include<stdio.h>
void main()
{
        int n,tem2; 
        printf("enter the numbr n=");
        scanf("%d",&n);
        tem2=n-1;
        for(int row=1;row<=n;row++)
        {
            for(int cols=1;cols<=tem2;cols++)
            {
                printf("     ");
               

            }
             tem2--;
             
            for(int cols1=1;cols1<=row;cols1++)
           {
                  printf("  *  ");
           } 
                 printf("\n\n");
      }
}        