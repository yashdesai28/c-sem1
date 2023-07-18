#include<stdio.h>
void main()
{
        int n,rem,count;
        count=1;
   
        printf("enter the number n=");
        scanf("%d",&n);
        while(n!=0)
        {
           rem=n%10;
           if(rem%2==0)
          {
           count++;
          }
          else
          {
            count++;
          }


  
        }
         printf("%d",count);
       
}