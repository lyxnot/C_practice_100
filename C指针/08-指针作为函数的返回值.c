#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

int * getrand()
{
	// C 语言不支持在调用函数时返回局部变量的地址,除非定义局部变量为 static 变量 这样可以返回变量的地址
	static int arr[10];  
	// 播种子
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand();
		printf("%d\n", arr[i]);
	}
	return arr;  // 数组名为首元素的地址    所以返回的是地址也就是指针
}




int main()
{
	int *p;
	p = getrand();    // 指针接收地址
	for (int i = 0; i < 10; i++) {
		printf("*(p + [%d]) : %d\n", i, *(p + i));
	}

	return 0;
}