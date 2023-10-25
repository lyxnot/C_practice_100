 /*题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。

程序分析：无。*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void palin(int n);
//int main()
//{
//	//char a[5];
//	//scanf("%s", a); /*输入参数是已经定义好的“字符数组名”, 不用加&, 因为在C语言中数组名就代表该数组的起始地址*/
//	//printf("输入的字符为%s", a);
//	int i = 5;
//	printf("请输入5个字符\40:\40");
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
//		printf("相反的输出结果为:");
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
	char str[6];     // 会默认带'\0'
	int i;
	printf("请输入5个字符：\n");
	scanf("%s", str); /*输入参数是已经定义好的“字符数组名”, 不用加&, 因为在C语言中数组名就代表该数组的起始地址*/
	
	printf("相反的结果为：");
	for ( i = sizeof(str)-2; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	
	return 0;
}