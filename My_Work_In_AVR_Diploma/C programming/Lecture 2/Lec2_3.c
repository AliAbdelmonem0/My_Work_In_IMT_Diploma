#include <stdlib.h>
#include <stdio.h>
#define Ali_Abdelmonem_Ali 


//Employee salary hours per week return
unsigned int x,y;
int main()
{	
	/*BY Using Ternary Operator */
	/*
	printf("Please Enter Your Hours \n");
	scanf("%i",&x);
	y=(x>=30)? (x*80) : (x*50);
	printf("The Salary is %i \n",y);
	*/
	
	/*By Using IF Stetment*/
	printf("Please Enter Your Hours \n");
	scanf("%i",&x);
	if(x>=30)
		printf("The Salary is %i \n",(x*80));
	else
		printf("The Salary is %i \n",(x*50));
 
	return 0;
}