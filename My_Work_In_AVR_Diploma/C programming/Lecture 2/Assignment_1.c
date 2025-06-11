#include <stdlib.h>
#include <stdio.h>

#define Ali_Abdelmonem_Ali 

int main()
{	
	int radius;
	float Area,Perimeter;
	printf("Please enter the radius of the circle: ");
	scanf("%d",&radius);
	Area =(3.14*radius*radius);
	printf("The Area of the Circle is : %0.2f \n", Area);
	Perimeter =(2*3.14*radius);
	printf("The Perimeter of the Circle is : %0.2f", Perimeter);
	return 0;
}