 /*题目：利用递归方法求5!。

程序分析：递归公式：fn = fn_1 * 4!  */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"C_26.h"

//int recursion(int j);   // 函数的声明
int main()
{
	/*int i;
	for ( i = 0; i < 6; i++)
	{
		printf("%d!=%d\n", i, recursion(i));
	}*/
	int temp;
	printf("请输入要计算的阶数的数字：\n");
	scanf("%d", &temp);
	printf("结果为%d", recursion(temp));
	
	return 0;
}

int recursion(int j)
{
	int sum;
	if (j==0)
	{
		return 1;
	}
	sum = j * recursion(j - 1);
	return sum;
}