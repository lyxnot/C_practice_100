#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

int * getrand()
{
	// C ���Բ�֧���ڵ��ú���ʱ���ؾֲ������ĵ�ַ,���Ƕ���ֲ�����Ϊ static ���� �������Է��ر����ĵ�ַ
	static int arr[10];  
	// ������
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand();
		printf("%d\n", arr[i]);
	}
	return arr;  // ������Ϊ��Ԫ�صĵ�ַ    ���Է��ص��ǵ�ַҲ����ָ��
}




int main()
{
	int *p;
	p = getrand();    // ָ����յ�ַ
	for (int i = 0; i < 10; i++) {
		printf("*(p + [%d]) : %d\n", i, *(p + i));
	}

	return 0;
}