#include<stdio.h>
void main()
{
	int n,rem,ev,od;
        ev=0;
        od=0;
        printf("enter the number n=");
	scanf("%d",&n);
	while(n!=0)
    {
        rem=n%10;
     
        if(rem %2==0)
       {
         printf("even digit %d\n ",rem);
         ev=ev+rem;
       }
        else
       {
         printf("odd digit %d\n ",rem);
         od=od+rem;
       }
         n=n/10;
    }
     
       printf("sum even%d\n",ev);
       printf("sum odd %d\n",od);
}
         
