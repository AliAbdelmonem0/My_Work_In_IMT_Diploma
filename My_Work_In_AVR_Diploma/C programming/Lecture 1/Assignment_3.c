#include <stdlib.h>
#include <stdio.h>

#define Ali_Abdelmonem_Ali 

int main()
{	
	int NumA,NumB;
	printf("Please Enter number a: ");
	scanf("%d",&NumA);
	printf("Please Enter number b: ");
	scanf("%d",&NumB);
	printf("a + b = %d\n", (NumA+NumB));
	printf("a - b = %d\n", (NumA-NumB));
	printf("a & b = %d\n", (NumA&NumB));
	printf("a | b = %d\n", (NumA|NumB));
	printf("a ^ b = %d\n", (NumA^NumB));
	return 0;
}