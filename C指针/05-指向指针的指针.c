#include <stdio.h>
 /*��⣺ָ��ָ���ָ��   ������Aָ���Bָ��   Aָ��ָ��Bָ���ַ��Bָ��ȥָ��ĳһ�������ĵ�ַ
	 ��ô��Aָ����н����ã�**A�� �ͻ�õ��������ڴ������*/



int main()
{
	int v = 100;
	int *pt1;
	int **pt2;


	/* ��ȡ V �ĵ�ַ */
	pt1 = &v;
	printf("var = %d\n", pt1);

	/* ʹ������� & ��ȡ Pt1 �ĵ�ַ */
	pt2 = &pt1;


	/* ʹ�� pptr ��ȡֵ */
	printf("var = %d\n", v);
	printf("Pt1 = %p\n", pt1);
	printf("*Pt1 = %d\n", *pt1);
	printf("Pt2 = %p\n", pt2);
	printf("**Pt2 = %d\n", **pt2);

	return 0;
}
