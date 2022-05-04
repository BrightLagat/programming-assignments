//program for a grading system
#include <stdio.h>

int main()
{
	float mathematics,biology,kiswahili,chemistry,geography;
	float sum,average;
	
	printf("enter marks for Mathematics \n");
	scanf("%f",&mathematics);
	  
	printf("enter marks for biology \n");
	scanf("%f",&biology);
	  
	printf("enter marks for Kiswahili \n");
	scanf("%f",&kiswahili);
	  
	printf("enter marks for chemistry \n");
	scanf("%f",&geography);
	  
	printf("enter marks for geography \n");
	scanf("%f",&geography);
	
	sum= mathematics+biology+kiswahili+chemistry+geography;
	
	average=sum/5;
	
	printf("average = %f \n",average);
	
	
	if(average>= 70 && average<=100)
	{
	printf(" A\n");
	}
	
	else if(average>=60 && average<=69)
	{
	printf(" B\n");
	}
	
	else if(average>=40 && average<=59)
	{
	printf(" C\n");
	}
	
	else if(average>=0 && average<=39)
	{
	printf(" D\n");
	}

	else
	{
		printf(" Fail");
	}
	

	return 0;
}
