 /*��Ŀ�����9 * 9�ھ���

����������������п��ǣ��� 9 �� 9 �У�i �����У�j �����С�*/


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
