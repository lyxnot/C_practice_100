 /*题目：输出9 * 9口诀。

程序分析：分行与列考虑，共 9 行 9 列，i 控制行，j 控制列。*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int result;

int main()
{
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			result = i * j;
			printf("%d*%d=%-3d", i, j, result);
		}

		printf("\n");
	}



	return 0;
}
