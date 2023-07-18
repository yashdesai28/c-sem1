#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],c[100][100];
    int row;
    int col;
    printf("enter the row value=");
    scanf("%d",&row);
    printf("enter the col value=");
    scanf("%d",&col);
    
 
    printf("first metricx\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           printf("enter the value a[%d][%d]",i,j);
           scanf("%d",&a[i][j]);
        }
    } 
    printf("==================\n");
    printf("secend  metricx\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           printf("enter the value a[%d][%d]",i,j);
           scanf("%d",&b[i][j]);
        }
    }
    printf("==================\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("==================\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           printf("%d",c[i][j]);
           
        }
           printf("\n");
         
    }
          
  

}
