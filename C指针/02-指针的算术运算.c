#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>




/*����һ��ָ��
����ϲ���ڳ�����ʹ��ָ��������飬
��Ϊ����ָ����Ե����������鲻�ܵ�����������Կ���һ��ָ�볣����
test1()����ĳ����������ָ�룬�Ա�˳����������е�ÿһ��Ԫ�أ�*/

const int MAX = 3;
void test1()
{
	int var[] = { 10,100,200 };
	int i, *ptr;
	/* ָ���е������ַ */
	ptr = var;    // ����&var ȡ��ַ ����Ϊ ������������Ԫ�صĵ�ַ
                  // ָ���ƶ� �൱������1���������͵��ֽڴ�С Ȼ��ָ����һ��Ԫ��
	for ( i = 0; i < MAX; i++)
	{
		printf("�洢��ַ��var[%d] = %p\n", i, ptr);
		printf("�洢ֵ��var[%d] = %d\n", i, *ptr);
		/* ָ����һ��λ�� */
		ptr++;
	}
}

int main()
{
	test1();

	return 0;
}