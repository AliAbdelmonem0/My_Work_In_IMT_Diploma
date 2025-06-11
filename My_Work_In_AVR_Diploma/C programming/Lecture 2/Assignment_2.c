#include <stdlib.h>
#include <stdio.h>

#define Ali_Abdelmonem_Ali 

int main()
{	
	int Num1,Num2,Num3,Num4,Num5;
	printf("Please enter 5 numbers, each separated by white space: ");
	scanf("%d %d %d %d %d",&Num1,&Num2,&Num3,&Num4,&Num5);
    if ((Num1 > Num2)&&(Num1 > Num3)&&(Num1 > Num4)&&(Num1 > Num5)){
	printf("The maximum number in the entered numbers is %d",Num1);
	}
	else if((Num2 > Num1)&&(Num2 > Num3)&&(Num2 > Num4)&&(Num2 > Num5)){
	printf("The maximum number in the entered numbers is %d",Num2);
	}
	else if((Num3 > Num1)&&(Num3 > Num2)&&(Num3 > Num4)&&(Num3 > Num5)){
	printf("The maximum number in the entered numbers is %d",Num3);	
	}
	else if((Num4 > Num1)&&(Num4 > Num2)&&(Num4 > Num3)&&(Num4 > Num5)){
	printf("The maximum number in the entered numbers is %d",Num4);	
	}
	else if((Num5 > Num1)&&(Num5 > Num2)&&(Num5 > Num3)&&(Num5 > Num4)){
	printf("The maximum number in the entered numbers is %d",Num5);	
	}
	return 0;
}