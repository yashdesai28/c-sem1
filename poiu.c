#include<stdio.h>
void main()
{
        int n,tem;
        printf("enter the numbr n=");
        scanf("%d",&n);
        tem=n;
        for(int row=2;row<=n;row++)
        {
            for(int cols=1;cols<=row;cols++)
            {
                printf("1");
            }
              
               printf("\n");
               for(int cols1=1;cols1<=tem;cols1++)
           {
                  printf("  *  ");
                  
                  
           } 
                 tem--;
                 printf("\n\n");
             
            
        
        }
         
}                     