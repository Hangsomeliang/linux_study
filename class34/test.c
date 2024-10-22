#include <stdio.h>
#include <stdlib.h>

static void base_convert(void)
{
	int num,base;
	int n[128];
	int i=0;
	printf("Please enter the converted num:");
	scanf("%d",&num);
	printf("Please enter the base:");
	scanf("%d",&base);

	do
	{
		n[i] = num%base;
		num = num/base;
		i++;
	}while(num!=0);
	for(i--;i>=0;i--)
	{
		if(n[i]>=10)
			printf("%c",n[i]-10+'A');
		else
			printf("%d",n[i]);
	}
	printf("\n");
	return ;
}

static void primer(void)
{
	char primer[1001] = {0};
	int i,j;
	for(i=2;i<1001;i++)
	{
		if(primer[i] == 0)
		{
			for(j=i*2;j<1001;j+=i)
			{
				primer[j] = -1;
			}
		}
	}
	for(i=2;i<1001;i++)
	{
		if(primer[i]==0)
			printf("%d is a primer\n",i);
	}
}

int main(void)
{
//	base_convert();
	primer();
	exit(0);	
}

