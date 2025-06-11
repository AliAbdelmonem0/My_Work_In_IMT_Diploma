#include <stdlib.h>
#include <stdio.h>

#define Ali_Abdelmonem_Ali 

int x=15;
int y=20;

int main()
{	
	int z =x & y;
	int k =x | y;
	int l =x ^ y;
	int m =x >> 3;
	int n =x << 4;
	
	printf("Value of z is %i \n",z);
	printf("Value of k is %i \n",k);
	printf("Value of l is %i \n",l);
	printf("Value of m is %i \n",m);
	printf("Value of n is %i \n",n);
	
	
	

	return 0;
}