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
     
     
    printf("press 1 to find maximum number from n1 and n2\n");
    printf("press 2 to the minimum number from n1 and n2 \n");
    printf("press 3 for calculat averge of the both numbers\n");
    printf("press 4 for print the additon of the square of the both numbers\n");
  
    printf("give choise");
    scanf("%d",&ch);

    switch(ch) 
    {
     case 1:
     
	if(n1>n2)
    {
        printf("n1=%d is bigger\n",n1);	
    }
       else
    {
        printf("n2=%d is bigger\n",n2);
    }
       break;
   
    case 2:
   
      if(n1<n2)
    {
       printf("n1=%d is minimum \n",n1);
    }
      else
    {
      printf("n2=%d is minimum \n",n2);
    }
     break; 
 
     case 3:
  
      ave=(n1+n2)/2;
      printf("the ave %d and %d is %d \n",n1,n2,ave);
      
     break;
  
     case 4:

     squ=(n1*n1+n2*n2);
     printf("the squ %d and %d is %d \n",n1,n2,squ);
     
     break;
}
     
}
