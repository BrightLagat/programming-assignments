//Program on finding the sum of first 10 natural numbers
#include <stdio.h>

int main()
{
	int c,sum = 0;
	printf("The first 10 numbers are : \n");
for(c = 1; c <= 10; c++)
{
	sum=sum+c;
	printf("%d\n",c);
}
printf("\n The sum is : %d\n ",sum);
return 0;
	
}
