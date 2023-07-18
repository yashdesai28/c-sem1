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
           
            printf(" * ");
        }
        printf("\n");
        tmp++;
        tmp1--;



    }
}                 