#include<stdio.h>
void main()
{
   int n1,n2;
   int ch;
   int ave;
   int squ;
  
   printf("enter the number n1=");
   scanf("%d",&n1);
   printf("enter the number n2=");
   scanf("%d",&n2);
   
   printf("perss 1 max\n");
   printf("perss 2 mum\n");
   printf("perss 3 ave \n");
   printf("perss 4 squer\n");
 
   printf("give choies");
   scanf("%d",&ch);
  
   switch(ch)
 {
    case 1:
   
     if(n1>n2)
     {
       printf("n1=%d max");
     }
       else
     {
       printf("n2=%d max");
     }
       break;
     
      case 2:
  
      if(n1<n2)
     {
       printf("n1=%d is min");
     }
       else
     {
       printf("n2=%d is min");
     }
        break;
    
       case 3:
  
       ave=(n1+n2)/2;
       printf("the ave %d and %d is %d ",n1,n2,ave);
     
       break;
   
       case 4:
 
       squ=n1*n1+n2*n2;
       printf("the squ %d amd %d is %d ",n1,n2,squ);
       
       break;
 }
}