 /*��Ŀ�����õݹ鷽����5!��

����������ݹ鹫ʽ��fn = fn_1 * 4!  */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"C_26.h"

//int recursion(int j);   // ����������
int main()
{
	/*int i;
	for ( i = 0; i < 6; i++)
	{
		printf("%d!=%d\n", i, recursion(i));
	}*/
	int temp;
	printf("������Ҫ����Ľ��������֣�\n");
	scanf("%d", &temp);
	printf("���Ϊ%d", recursion(temp));
	
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