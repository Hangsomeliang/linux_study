#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static void area(void)
{
	float a,b,c;
	float s,area;

	printf("Please input:");
	scanf("%f%f%f",&a,&b,&c);

	printf("a = %f\tb = %f\tc = %f\n",a,b,c);

	s = 1.0/2*(a+b+c);
	area =sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area = %f\n",area);
	return ;
}

static void root(void)
{
	float a,b,c,p,q;
	float disc;
	float x1,x2;
	printf("Please input:");
	scanf("%f%f%f",&a,&b,&c);
	if((b*b - 4*a*c)<0)
	{
		fprintf(stderr,"EINVAL\n");
		exit(1);
	}
	disc = b*b - 4*a*c;
	q = sqrt(disc)/2*a;
	p = -b/2*a;
	x1 = p+q;
	x2 = p-q;
	printf("x1 = %f\nx2 = %f\n",x1,x2);
	return ;
}

int main(void)
{
//	area();
	root();	
	exit(0);
}

