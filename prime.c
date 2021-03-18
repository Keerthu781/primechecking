#include<stdio.h>
void main()
{
	int n;
	printf("\n\tPRIME NUMBER CHECKING");
	printf("\n\t______________________");
	
	printf("\n\tEnter the number:");
	scanf("%d",&n);
	if((n==2)||(n==3)||(n==5))
    {
      printf("\n\t Given Number is a Prime Number"); }
   
    else if( n%2==0 || n%3==0 || n%5==0 )
    { 
     printf("\n\t Given Number is Not a Prime Number"); }
    else if(n==1)
   {
    printf("\n\t Neither prime nor Composit");}

    else
    {
        printf("\n\t Given Number is a Prime Number"); } 
}

