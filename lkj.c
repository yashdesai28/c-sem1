#include<Stdio.h>
void main()
{
    int num,counter=0;
    printf("plese enter a number=");
    scanf("%d",&num);
    int tmp1=num,tmp=0;

    for(;counter<num;counter++)
    {
        for(int i=0;i<tmp;i++)
        {
            printf("   ");
        }
        for(int i1=0;i1<tmp1;i1++)
        {
           
            printf("  *  ");
        }
        printf("\n\n");
        tmp++;
        tmp1--;
        }
       
          int tem2=num-1;
        for(int row=2;row<=num;row++)
        {
            
            for(int cols=1;cols<=tem2;cols++)
            {
                printf("   ");
               

            }
             tem2--;
             
            for(int cols1=1;cols1<=row;cols1++)
           {
                  printf("  *  ");
           } 
                 printf("\n\n");
      }
}                 