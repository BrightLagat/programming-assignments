//PROGRAM FOR FINDING VOLUME OF A SPHERE
#include <stdio.h>
#include <math.h>

int main()
{
	float r,volume;
	printf("Enter the radius of the sphere ");
	scanf("%f",&r);
	
	volume=4/3*M_PI*r*r*r;
	
	printf("volume of the sphere is = %f \n",volume);
	return 0;
}
