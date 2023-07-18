#include<stdio.h>
void main()
{
    int counter,n,var;
    counter=1;
    var=0;
  
    printf("take number as an input  n=");
    scanf("%d",&n);

    while(counter<=n)
  {
     var=var+counter;
  
     counter=counter +1;
     
  }
   printf("%d\n",var);
}
      