#include<stdio.h>
void main()
{
    int n,count,oddsum;
    count=1;
    oddsum=0;
    printf("enter the number n=");
    scanf("%d",&n);
    while(count<=n)
  {
    
     
     oddsum=oddsum+count;
     count=count+2;
  }
    
     printf("%d\n",oddsum);
     
}
    