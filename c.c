#include<stdio.h>
void main()
{
   int kg;
   int n1;
   int ch;
   
   printf("enter the number n1=");
   scanf("%d",&n1);
   printf( "press 1 kg\n "); 
   printf( "press 2 odd & even\n "); 
   printf( "press 3 positive &negetiv &zero\n "); 
   printf( "press 4 divizibl 5 or not\n"); 
   
    printf("give choice");
    scanf("%d",&ch);
    
    switch (ch)
 {
    case 1:
   
    kg=n1/1000;
    printf("the kg of %d is %d ",n1,kg);
  
    break;
 
    case 2:
 
    if(n1%2==0)
    {
      printf("odd");
    }
      else
    {
      printf("even");
    }
     
    break;
 
    case 3:
  
    if(n1==0)
    {
      printf("zero");
    }
     else if(n1>0)
    {
      printf("positivie");
    }
      else
    {
      printf("negetive");
    } 
     
      break;
  
     case 4:
  
     if(n1%5==0)
     {
       printf("divizebal by 5");
     }
       else
     {
       printf("not devizebal by 5");
     }
       break;
    
      default:
      printf("invelid choice");
      break;
 }

}
    







