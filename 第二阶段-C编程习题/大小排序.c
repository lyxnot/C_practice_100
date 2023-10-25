#include <stdio.h>
int main(int argc, const char * argv[])
{
	int array[] = { 1, 4, 7, 2, 5, 8, 3, 6, 9 };
	int count = sizeof(array) / sizeof(array[0]);   //计算数组中元素的个数
	int index[9]; //索引数组
	int flag = 1;   //标识位，它的作用在于优化冒泡排序，置1的状态为无序状态，0为有序状态

	for (int i = 0; i < count; i++) {
		index[i] = i;  //遍历给索引数组赋值为原数组的下标
	}
	for (int i = 0; i < count - 1 && 1 == flag; i++) {  //在这里判断是否是无序状态，如果有序，就不用排序了（就不进入循环）
		flag = 0;    //每次进循环排序前假定有序状态
		for (int j = 0; j < count - i - 1; j++) {
			if (array[index[j]] > array[index[j + 1]]) {  //相邻元素之间依次比较大小
				int temp = 0;
				temp = index[j];
				index[j] = index[j + 1];
				index[j + 1] = temp;
				flag = 1;     //如果发生了数据交换，那么肯定是无序状态，给它置一，再次进循环排序
			}
		}
	}
	for (int i = 0; i < count; i++) {
		printf("array[%d] = %d\n", index[i], array[index[i]]);
	}


	return 0;
}