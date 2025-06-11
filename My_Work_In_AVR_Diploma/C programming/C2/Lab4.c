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
	int x=7,y=4;
	
	int z=x&y;
	int k=x|y;
	int m=x^y;
	int l=x>>1;
	int n=y<<2;
	
	printf("z = %d\n",z);
	printf("k = %d\n",k);
    printf("m = %d\n",m);
	printf("l = %d\n",l);
	printf("n = %d\n",n);
	
	return 0;
}