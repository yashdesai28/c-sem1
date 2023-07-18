#include<stdio.h>
void main()
{
        int n;
        printf("enter the numbr n=");
        scanf("%d",&n);
        for(int row=1;row<=n;row++)
        {
            for(int cols=1;cols<=n;cols++)
            {
                printf("%d",cols);
            }
               printf("\n");
        }
}                     