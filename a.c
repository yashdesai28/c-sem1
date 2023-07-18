#include<stdio.h>

void main()
{
  int n1,n2;
  
  
  
  printf("enter the number n1=");
  scanf("%d",&n1);
  printf("enter the number n2=");
  scanf("%d",&n2);
 
  if(n1==n2)
  {
    printf("equal");
  }
    else if(n1<n2)
  {
  printf("min n1=%d");
  }
   else
  {
   printf("min n2=%d");
  }
 
  
}