#include <stdio.h>
 /*理解：指向指针的指针   假如有A指针和B指针   A指针指向B指针地址，B指针去指向某一个变量的地址
	 那么对A指针进行解引用（**A） 就会得到变量于内存的数据*/



int main()
{
	int v = 100;
	int *pt1;
	int **pt2;


	/* 获取 V 的地址 */
	pt1 = &v;
	printf("var = %d\n", pt1);

	/* 使用运算符 & 获取 Pt1 的地址 */
	pt2 = &pt1;


	/* 使用 pptr 获取值 */
	printf("var = %d\n", v);
	printf("Pt1 = %p\n", pt1);
	printf("*Pt1 = %d\n", *pt1);
	printf("Pt2 = %p\n", pt2);
	printf("**Pt2 = %d\n", **pt2);

	return 0;
}
