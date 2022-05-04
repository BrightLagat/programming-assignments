//PROOGRAM TO FIND THE AREA OF A CIRCLE
#include <stdio.h>
int main()
{
	float r;
	float area;
	printf("enter radius of the circle\n");
	scanf("%f",&r);
	area = 3.142 * r * r;
	printf("area=%f\n",area);
	return 0;
}
