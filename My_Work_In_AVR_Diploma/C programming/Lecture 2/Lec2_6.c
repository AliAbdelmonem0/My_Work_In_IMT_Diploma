#include <stdlib.h>
#include <stdio.h>
#define Ali_Abdelmonem_Ali 


//Student Grade App By USing SwitchCase

int main()
{	
	/*By Using SwitchCase */
	int Grade;
	printf("Please Enter Your Grade \n");
	scanf("%d",&Grade);
	if(Grade < 50)
	{	
		printf("Faild ");
	}
	else if((65 >= Grade) && (Grade >= 50) )
	{
		printf("Passed ");
	}
	else if((75 >= Grade) && ( Grade >65))
	{
		printf("Good ");
	}
	else if((85 >= Grade) && ( Grade >75))
	{
		printf("Very Good ");
	}
	else if((100 >= Grade) && ( Grade >85))
	{
		printf("Execellent ");
	}	

	return 0;
}