#include <stdio.h>
#include <stdlib.h>

#define N 10

static void sort(void)
{
	int a[N] = {23,45,90,79,13,55,76,45,3,8};
	int i,j,k,tmp;
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<N-1;i++)
	{
		k=i;
		for(j=i+1;j<N;j++)
		{
			if(a[j]<a[k])
				k=j;
		}
		if(i!=k)
		{
			tmp = a[i];
			a[i] = a[k];
			a[k] = tmp;
		}
	}
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
		printf("%d ",a[i]);
	printf("\n");
}

int main(void)
{
	sort();
	exit(0);
}

