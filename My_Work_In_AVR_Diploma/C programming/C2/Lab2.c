/*
 *
 *
 *  Created on: June 11, 2025
 *      Author: Ali Abdelmonem Ali
 */
#include <stdlib.h>
#include <stdio.h>

int main()
{	
	int n1,n2;
	printf("Enter Two Numbers to make \n 1-Summation \n 2-Subtraction \n 3-Multiplication \n 4-disvision \n");
	
	printf("Enter the First Number:");
	scanf("\n%d",&n1);
	printf("Enter the Second Number:");
	scanf("\n%d",&n2);
	

	printf("The Summation is :%d\n",(n1+n2));
	printf("The Subtraction is :%d\n",(n1-n2));
	printf("The Multiplication is :%d\n",(n1*n2));
    printf("The disvision is :%d\n",(n1/n2));
	
	return 0;
}