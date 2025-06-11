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
	int L,W;
	printf("Enter the Length :");
	scanf("\n%d",&L);
	printf("Enter the Width :");
	scanf("\n%d",&W);
	
	int Perimeter =((L+W)*2);
	printf("The Perimeter of Rectanguler is :%d\n",Perimeter);
	int Area =(L*W);
	printf("The Area of Rectanguler is :%d",Area);
	
	
	return 0;
}