//evenodd sum 


#include<stdio.h>
void main()
{
	int n,rem,ev,od,sumeven,sumodd;
        ev=0;
        od=0;
        printf("enter the number n=");           
	scanf("%d",&n);
	while(n!=0)
    {
        rem=n%10;
     
        if(rem %2==0)
       {
         sumeven=sumeven+rem;
         ev=ev+1;
       }
        else
       {
         sumodd=sumodd+rem;
         od=od+1;
       }
         n=n/10;
    }
     
       printf("even digit=%d\n",ev);
       printf("odd digit=%d\n",od); 
       printf("sumeven digit=%d\n",sumeven);
       printf("sumodd digit=%d\n",sumodd);
}
        