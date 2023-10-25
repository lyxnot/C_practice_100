
#include <stdio.h>

/* 函数声明 */
double getAverage(int *arr, int size);

int main()
{
	/* 带有 5 个元素的整型数组  */
	int balance[5] = { 1000, 2, 3, 17, 50 };
	double avg;

	/* 传递一个指向数组的指针作为参数 */
	avg = getAverage(balance, 5); // balance数组作为参数 其函数形参退化为指针形式

	/* 输出返回值  */
	printf("Average value is: %f\n", avg);

	return 0;
}

double getAverage(int *balance, int size)
{
	int    i, sum = 0;
	double avg;

	for (i = 0; i < size; ++i)
	{
		sum += balance[i];
	}

	avg = (double)sum / size;

	return avg;
}