#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



#define MAX 3
//const int MAX = 3;
void test1()
{
	int  var[] = { 10, 100, 200 };
	int i;
	int *p[MAX];
	for ( i = 0; i < MAX; i++)
	{
		p[i] = &var[i];

	}


	for (i = 0; i < MAX; i++)
	{
		printf("Value of var[%d] = %d\n", i, *p[i]);
	}
}

int main()
{
	test1();
	
	return 0;
}


// 数组指针（数组的指针）：指向数组的指针
//指针数组（指针的数组）：数组里的元素为指针