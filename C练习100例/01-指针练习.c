#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 /*指针也就是内存地址，指针变量是用来存放内存地址的变量。
就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明*/

 /*用指针时会频繁进行以下几个操作：
定义一个指针变量、把变量地址赋值给指针、访问指针变量中可用地址的值。
这些是通过使用一元运算符 * 来返回位于操作数所指定地址的变量的值。*/

void test1()
{
	int var_runoob = 10;
	int *p;              // 定义指针变量     指针变量的声明  星号是用来指定一个变量是指针
	p = &var_runoob;
	printf("hello world\n");
	printf("var_runoob 变量的地址： %p\n", p);  
	printf("var_runoob 变量的值： %d\n", *p);     // *p 这时候的*p表示解引用 寻找指向的数据
}

int main() 
{
	test1();


	return 0;
}