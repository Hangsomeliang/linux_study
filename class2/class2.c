#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/**
隐式转换，低精度向高精度转换
显式转换：强制类型转换

**/

void func(void)
{
	static int x = 0;
	x = x+1;
	printf("%p=%d\n",&x,x);
}

int main()
{
	bool a = false;
	float b = 1.0/3*3;
	auto int i;
	printf("i= %d\n",i);
	printf("a=%d\n",a);
	printf("b=%f\n",b);
	func();
	func();
	return 0;	
}

