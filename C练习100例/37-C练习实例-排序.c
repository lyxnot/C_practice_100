//题目：对10个数进行排序。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 10
int main()
{
	int i,j,temp;
	int a[10];
	printf("请输入你要排序的十个数:\n");
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);  // 从键盘输入10个数放入数组  
	}
	//  对数组里面的数据进行排序  (冒泡排序) 内层控制轮数 外层控制次数
	for (i = 0; i < N - 1; i++) {
		for (j = 0; j < N - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	//  对数组里面的数据进行排序(选择排序) 找最小值 每个值都与最小值进行比较 改变最小值
	/*for (i = 0; i < N - 1; i++)
	{
		int min = i;
		for (j = i + 1; j < N; j++)
			if (a[min] > a[j]) min = j;
		if (min != i)
		{
			temp = a[min];
			a[min] = a[i];
			a[i] = temp;
		}
	}*/
	//printf("排序之后的数据为%d",a[1]);
	printf("排序结果是:\n");
	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}

