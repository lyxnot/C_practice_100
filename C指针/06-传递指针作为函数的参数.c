#include <stdio.h>
#include <time.h>


void test1()
{
	/* ��ȡ��ǰ������ */
	int *par;
	int result;
	result = time(NULL);
	par = &result;

	//par=&time(NULL);  //�����


   /* ���ʵ��ֵ */

	printf("Number of seconds: %ld\n", *par);
}


void get_time(unsigned long *pt)   // ������ָ�� ��ôָ�����ڽ��յ�ַ�����Դ���ַ����
{
	*pt = time(NULL);  // ��Ϊpt�����˵�ַ ,*pt ������ָ��sec ȥ��time��NULL��

	//printf("Number of seconds: %ld\n", *pt);

	return;

}


int main()
{

	//test1();  // û��ָ�봫��������д��
	// ָ�봫��������д�����£�
	unsigned long sec;
	get_time(&sec);
	printf("Number of seconds: %ld\n", sec);

	return 0;
}

