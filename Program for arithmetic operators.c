//program showing arithmetic operators
#include <stdio.h>
int main()
{
	int x,y;
	int addition,subtraction,modulus;
	float division;
	printf("Enter the value of the first number ");
	scanf("%d",&x);
	printf("Enter the value of the second number ");
	scanf("%d",&y);
	addition = x+y;
	subtraction = x-y;
	division = (float)x /(float) y;
	modulus = x%y;
	printf("addition of the two numbers x, y is : %d\n",addition);
	printf("subtraction of the two numbers x, y : %d\n",subtraction);
	printf("division of two the numbers x, y : %f\n",division);
	printf("modulus of the two numbers x, y : %d\n",modulus);
	
	return 0;
}
