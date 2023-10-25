#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>




/*递增一个指针
我们喜欢在程序中使用指针代替数组，
因为变量指针可以递增，而数组不能递增，数组可以看成一个指针常量。
test1()下面的程序递增变量指针，以便顺序访问数组中的每一个元素：*/

const int MAX = 3;
void test1()
{
	int var[] = { 10,100,200 };
	int i, *ptr;
	/* 指针中的数组地址 */
	ptr = var;    // 不用&var 取地址 是因为 数组名就是首元素的地址
                  // 指针移动 相当于走了1个数据类型的字节大小 然后指向下一个元素
	for ( i = 0; i < MAX; i++)
	{
		printf("存储地址：var[%d] = %p\n", i, ptr);
		printf("存储值：var[%d] = %d\n", i, *ptr);
		/* 指向下一个位置 */
		ptr++;
	}
}

int main()
{
	test1();

	return 0;
}