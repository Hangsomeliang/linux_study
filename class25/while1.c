#include <stdio.h>
#include <stdlib.h>

#define LEFT 1
#define RIGHT 100

int main(void)
{
	int i;
	int sum = 0;
	i = LEFT;
	do
	{	
		sum += i;
		i++;
	}while(i <= RIGHT);
	printf("sum = %d\n",sum);
	exit(0);
}

