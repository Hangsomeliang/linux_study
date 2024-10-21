#include <stdio.h>
#include <stdlib.h>
/*
int main(void)
{
	int score;
	printf("Enter a score:[0,100]:");
	scanf("%d",&score);
	if(score < 0||score>100)
	{
		fprintf(stderr,"Input error!\n");
		exit(1);
	}	
	if(score <= 100&&score>=90)
	{
		puts("A");
	}
	if(score < 90&&score>=80)
	{
		puts("B");
	}
	if(score < 80&&score>=70)
	{
		puts("C");
	}
	if(score < 70&&score>=60)
	{
		puts("D");
	}
	if(score < 60&&score>=0)
	{
		puts("E");
	}
	exit(0);
}
*/

int main(void)
{
	int year;
	scanf("%d",&year);
	if((year%4==0)&&(year%100!=0)||year%400==0)
	{
		printf("%d is leap year.\n",year);
	}
	else
	{	
		printf("%d is not leap year.\n",year);
	}
}

