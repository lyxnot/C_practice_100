
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>







//void * Memcpy1(void *dst, const void *src, size_t num)
//{
//	int nchunks = num / sizeof(dst);   /*��CPUλ����*/
//
//	printf("%d\n", sizeof(dst));  //4  �����4ָ���� ָ������� ��4���ֽ�
//	printf("%d\n", nchunks);
//	printf("%d\n", dst);
//	printf("%d\n", (int)dst);
//	printf("%d\n", (int)src+num);
//
//	int slice = num % sizeof(dst);   /*ʣ��İ��ֽڿ���*/
//
//	unsigned long * s = (unsigned long *)src;    // ����ת���ͣ���Ϊ�����ֽڵĿ���
//	unsigned long * d = (unsigned long *)dst;
//
//	while (nchunks--)
//		*d++ = *s++;
//
//	while (slice--)
//		*((char *)d++) = *((char *)s++);   // ������ת��ȥ��1�ֽڵĿ���
//
//	return dst;
//}

void *Memcpy(void *dest, const void *src, size_t count)
{
	
	int bytelen = count / sizeof(dest);	/*��CPUλ����*/
	int slice = count % sizeof(dest);	/*ʣ��İ��ֽڿ���*/
	unsigned int* d = (unsigned int*)dest;
	unsigned int* s = (unsigned int*)src;

	if (((int)dest > ((int)src + count)) || (dest < src))
	{
		while (bytelen--)
			*d++ = *s++;
		while (slice--)
			*(char *)d++ = *(char *)s++;
	}
	else /* overlap�ص� */
	{
		d = (unsigned int*)((unsigned int)dest + count - 4); /*ָ��λ�ô�ĩ�˿�ʼ��ע��ƫ�� */
		s = (unsigned int*)((unsigned int)src + count - 4);
		while (bytelen--)
			*d-- = *s--;
		d++; s++;
		char * d1 = (char *)d;
		char * s1 = (char *)s;
		d1--; s1--;

		while (slice--)
			*((char *)d1--) = *(char *)s1--;
	}
	printf("%s\n", dest);
	return dest;
}



int main() {
	//char a[20] = "1133224466558877990";
	char a[12] = "helloworld";
	/*char *a = "helloworld";
	printf("%d\n", strlen(a));*/
	//	Memcpy2(a+2,a,5);
	int *p;
	Memcpy(a + 1, a, 5);

	/*for (int i = 0; i < 12; i++)
	{*/
		
	//}
	return 0;
	
}

