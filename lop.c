#include<stdio.h>
void main()
{
    int n;
    int count;
    int mul;
    count=1;
    mul=1;
    printf("enter the number n=");
    scanf("%d",&n);

    while(count<=n)
    {
       printf("%d \n",count);
       mul=mul*count;
       count=count+1;
    }
 printf("======================================\n");
  printf("%d \n",mul);
}
      
            
     