//��Ŀ����10������������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 10
int main()
{
	int i,j,temp;
	int a[10];
	printf("��������Ҫ�����ʮ����:\n");
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);  // �Ӽ�������10������������  
	}
	//  ��������������ݽ�������  (ð������) �ڲ�������� �����ƴ���
	for (i = 0; i < N - 1; i++) {
		for (j = 0; j < N - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	//  ��������������ݽ�������(ѡ������) ����Сֵ ÿ��ֵ������Сֵ���бȽ� �ı���Сֵ
	/*for (i = 0; i < N - 1; i++)
	{
		int min = i;
		for (j = i + 1; j < N; j++)
			if (a[min] > a[j]) min = j;
		if (min != i)
		{
			temp = a[min];
			a[min] = a[i];
			a[i] = temp;
		}
	}*/
	//printf("����֮�������Ϊ%d",a[1]);
	printf("��������:\n");
	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}

