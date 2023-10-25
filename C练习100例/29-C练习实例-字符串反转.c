 /*字符串反转
	 1.利用[]
	 2.利用指针*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverseString1(char *str) {
	int start = 0;
	int end = strlen(str) - 1;
	while (start<end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}
}

void test01() {
	char str[] = "abcdefghijklmn";
	reverseString1(str);
	printf("%s", str);
}


void reverseString2(char *str) {
	char *start = str;
	int len = strlen(str);
	char *end = str + len - 1;    // 指针的偏移量
	while (start<end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

void test02() {
	char str[] = "abcdefghijklmn";
	reverseString2(str);
	printf("%s", str);
}

int main()
{
	//test01();
	test02();

	return 0;
}

