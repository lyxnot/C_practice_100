

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a = 21;
	int count = 0;
	while (a>0)  // ����ʹ�ã�a/2��!=0 ������� ��Ϊa=1ʱ��û�а�����ȥ
	{
		if (a%2==1)
		{
			count++;
		}
			a /= 2;

	}
	printf("ͳ��1�ĸ���%d��", count);
	return 0;
}


int main()
{
	int a = 10;
	int count = 0;

	return 0;
}
