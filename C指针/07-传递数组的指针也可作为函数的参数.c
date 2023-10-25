
#include <stdio.h>

/* �������� */
double getAverage(int *arr, int size);

int main()
{
	/* ���� 5 ��Ԫ�ص���������  */
	int balance[5] = { 1000, 2, 3, 17, 50 };
	double avg;

	/* ����һ��ָ�������ָ����Ϊ���� */
	avg = getAverage(balance, 5); // balance������Ϊ���� �亯���β��˻�Ϊָ����ʽ

	/* �������ֵ  */
	printf("Average value is: %f\n", avg);

	return 0;
}

double getAverage(int *balance, int size)
{
	int    i, sum = 0;
	double avg;

	for (i = 0; i < size; ++i)
	{
		sum += balance[i];
	}

	avg = (double)sum / size;

	return avg;
}