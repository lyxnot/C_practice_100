 /*��Ŀ���ж� 101 �� 200 ֮���������

����������ж������ķ�������һ�����ֱ�ȥ�� 2 �� sqrt(�����)������ܱ����������������������������֮��������*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 0; int j = 0;
	int count = 0;
	for (i = 101; i < 201; i++)      // sizt_t   ��unsigned����
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