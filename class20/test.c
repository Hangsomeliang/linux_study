#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static void area(void)
{
	float a,b,c;
	float s,area;

	printf("Please input:");
	scanf("%f%f%f",&a,&b,&c);
	s = 1/2*(a+b+c);
	area =sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area = %f\n",area);
	return ;
}


int main(void)
{
	area();
	exit(0);
}

