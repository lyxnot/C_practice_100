 /*��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������

����������ޡ�*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void palin(int n);
//int main()
//{
//	//char a[5];
//	//scanf("%s", a); /*����������Ѿ�����õġ��ַ���������, ���ü�&, ��Ϊ��C�������������ʹ�����������ʼ��ַ*/
//	//printf("������ַ�Ϊ%s", a);
//	int i = 5;
//	printf("������5���ַ�\40:\40");
//	palin(i);
//	printf("\n");
//	return 0;
//}
//
//
//void palin(int n)
//{
//	char next;
//	if (n<=1)
//	{
//		next = getchar();
//		printf("�෴��������Ϊ:");
//		putchar(next);
//	}
//	else
//	{
//	next = getchar();
//	palin(n - 1);
//	putchar(next);
//	}
//}



int main()
{
	char str[6];     // ��Ĭ�ϴ�'\0'
	int i;
	printf("������5���ַ���\n");
	scanf("%s", str); /*����������Ѿ�����õġ��ַ���������, ���ü�&, ��Ϊ��C�������������ʹ�����������ʼ��ַ*/
	
	printf("�෴�Ľ��Ϊ��");
	for ( i = sizeof(str)-2; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	
	return 0;
}