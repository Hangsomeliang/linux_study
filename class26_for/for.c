#include <stdio.h>
#include <stdlib.h>

#define LEFT 0
#define RIGHT 100

int main(void)
{
	int i;
	int start,end = 10;
	int sum = 0;
	for(i = LEFT,sum = 0; i <= RIGHT;i++)
	{
		sum += i;
	}
	printf("sum = %d\n",sum);
}
