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
                printf("   ");
            }
               tem--;
             
            
            for(int cols=1;cols<=row;cols++)
            {
                printf(" * ");
            }
              printf("\n");
            
        }
         
}                     