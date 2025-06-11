#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

#define Ali_Abdelmonem_Ali 

int main()
{	
	int NumOfSides , TheLength , p , area;
	printf("Please enter the number of sides : ");
	scanf("%d",&NumOfSides);
	printf("Please enter the length for each side : ");
	scanf("%d",&TheLength);
	area=(NumOfSides*TheLength*TheLength) / (4 * tan(PI/NumOfSides));
	printf("The area of this polygon is :%d",area);
	return 0;
}