#include <stdio.h>
#include <stdlib.h>


#define PI 3.14

static void test6(void)
{
	int i,j,k;
	for(i = 0;i<100/5;i++)
	{
		for(j=0;j<100/3;j++)
		{
			k = 100 - i - j;
			if(k%3 == 0 && 5*i+3*j+k/3 == 100)
				printf("%d %d %d\n",i,j,k);
		}		
	}
}

static void test7(void)
{
	int i;
	int a,b,c;
	for(i = 100;i<1000;i++)
	{
		a = i/100;
		b = i%100/10;
		c = i%10;
		if(i == a*a*a + b*b*b + c*c*c)
		{
			printf("%d\n",i);
		}	
	}
}

static void test8(void)
{
	int i,j,mark;
	for(i = 2;i<=1000;i++)
	{
		mark = 1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				mark = 0;
				break;	
			}
		}
		if(mark)
			printf("%d is a prime.\n",i);
	}
}

static void test9(void)
{
	int line = 6,i,chars = 6;
	char ch;
	for(i = 0;i<line;i++)
	{
		for(ch = 'A'+i;ch < 'A' + chars;ch++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}	
}

static void test10(void)
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
			printf(" ");
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		for(k=1;k<=7-2*i;k++)
			printf("*");
		printf("\n");
	}
}

static void test11(void)
{
	int num;
	int sum = 0;
	printf("Please enter the first integet(q to quit):");
	while(scanf("%d",&num)==1)
	{
		sum += num;
		printf("Please enter the next integet(q to quit):");
	}
	printf("sum = %d",sum);
}

static void test12(void)
{
	int r = 1;
	float area;
	for(r = 1;;r++)
	{
		area = PI*r*r;
		if(area>100)
			break;
		printf("area = %f\n",area);
	}	
}

int main(void)
{
//	test6();
//	test7();
//	test8();
//	test9();
//	test10();
//	test11();
	test12();
	exit(0);
}

