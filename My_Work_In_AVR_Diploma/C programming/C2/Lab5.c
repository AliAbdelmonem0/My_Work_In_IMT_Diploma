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
	
	printf("Please Enter Your ID : ");
	int ID;
	scanf("%d",&ID);
	
	switch(ID)
	{
		case 1234: printf("Welcome Ahmed ");
		break;
		case 5678: printf("Welcome Youssef ");
		break;
		case 1145: printf("Welcome Mina ");
		break;
		default : printf("Wrong ID");
		
	}
	
	return 0;
}