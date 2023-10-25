

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a = 21;
	int count = 0;
	while (a>0)  // 不能使用（a/2）!=0 这个条件 因为a=1时，没有包含进去
	{
		if (a%2==1)
		{
			count++;
		}
			a /= 2;

	}
	printf("统计1的个数%d：", count);
	return 0;
}


int main()
{
	int a = 10;
	int count = 0;

	return 0;
}
