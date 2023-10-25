#include <stdio.h>

int main()
{
	//单个字符
	char c1 = 'A';
	printf("%c\n", c1);

	// 普通字符数组
	char c2[] = { 'h','e','l','l','o' };
	printf("%c\n", c2[0]);
	//printf("%s\n", c2); //会乱码，因为没有'\0'结束符

	// 字符串（因为C中没有字符串类型，所有用char的数组来替代）
	//有两种写作方式：
	//方式一如下：
	char c3[] = { 'h','e','l','l','o' ,'\0' };
	printf("%c\n", c3[1]);
	printf("%s\n", c3);

	//方式二如下：
	char c4[] = "hello";  // 会默认带'\0'
	printf("%c\n", c4[2]);
	printf("%s\n", c4);

	// 用一个指向字符的 指针数组 来存储一个字符串列表
	char *c5[] = { "hello","world" };  // 会默认带'\0'
	printf("%s\n", c5[1]);

	return 0;
}
