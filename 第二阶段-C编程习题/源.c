
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>







//void * Memcpy1(void *dst, const void *src, size_t num)
//{
//	int nchunks = num / sizeof(dst);   /*按CPU位宽拷贝*/
//
//	printf("%d\n", sizeof(dst));  //4  这里的4指的是 指针的类型 是4个字节
//	printf("%d\n", nchunks);
//	printf("%d\n", dst);
//	printf("%d\n", (int)dst);
//	printf("%d\n", (int)src+num);
//
//	int slice = num % sizeof(dst);   /*剩余的按字节拷贝*/
//
//	unsigned long * s = (unsigned long *)src;    // 这里转类型，是为了四字节的拷贝
//	unsigned long * d = (unsigned long *)dst;
//
//	while (nchunks--)
//		*d++ = *s++;
//
//	while (slice--)
//		*((char *)d++) = *((char *)s++);   // 这里在转回去，1字节的拷贝
//
//	return dst;
//}

void *Memcpy(void *dest, const void *src, size_t count)
{
	
	int bytelen = count / sizeof(dest);	/*按CPU位宽拷贝*/
	int slice = count % sizeof(dest);	/*剩余的按字节拷贝*/
	unsigned int* d = (unsigned int*)dest;
	unsigned int* s = (unsigned int*)src;

	if (((int)dest > ((int)src + count)) || (dest < src))
	{
		while (bytelen--)
			*d++ = *s++;
		while (slice--)
			*(char *)d++ = *(char *)s++;
	}
	else /* overlap重叠 */
	{
		d = (unsigned int*)((unsigned int)dest + count - 4); /*指针位置从末端开始，注意偏置 */
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

