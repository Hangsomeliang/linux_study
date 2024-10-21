#include <stdio.h>
#include <stdlib.h>
#define LEFT 0
#define RIGHT 100

int main(void)
{
	int i;
	int start,end = 10;
	int sum = 0;

	i = LEFT;
loop:
	sum += i;
	i++;
	if(i<=RIGHT)
		goto loop;	
	printf("sum = %d\n",sum);
}

