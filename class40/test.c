#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[128];
	int count = 0,flag = 0;
	int i;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i] == ' ')
			flag = 0;
		else
			if(flag == 0)
			{
				count++;
				flag = 1;
			}
	}
	printf("count = %d\n",count);
	exit(0);
}

