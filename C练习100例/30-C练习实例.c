 /*��Ŀ��һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��

���������ѧ��ֽ��ÿһλ��*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i,j;
	char str[10];
	//scanf("%s", str);
	//gets(str);
	gets_s(str);
	int length = strlen(str);     // ͳ�������ַ������Ϊʲô
	printf("%d",length);
	printf("%s", str);
	for (i = 0; i < length; i++)
	{
		j = length - 1;
		if (i==j)
		{
			printf("�ǻ���");
			break;
		}
		for ( j ; j >=0; j--)
		{
			if (str[i]==str[j])
			{
				length--;
				break;
			}
			else
			{
				printf("���ǻ���");
				return 0;
			}
		}

	}
	



	return 0;
}