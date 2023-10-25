 /*题目：判断 101 到 200 之间的素数。

程序分析：判断素数的方法：用一个数分别去除 2 到 sqrt(这个数)，如果能被整除，则表明此数不是素数，反之是素数。*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 0; int j = 0;
	int count = 0;
	for (i = 101; i < 201; i++)      // sizt_t   是unsigned类型
	{
		for ( j = 2; j < i; j++)
		{
			if (i%j==0)
			{
				break;
			}
		}
		if (j>=i)
		{
			count++;
			printf("%d", i);
			if (count%5==0)
			{
				printf("\n");
			}
		}
	}



	return 0;
}