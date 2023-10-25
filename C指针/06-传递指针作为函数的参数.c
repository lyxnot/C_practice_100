#include <stdio.h>
#include <time.h>


void test1()
{
	/* 获取当前的秒数 */
	int *par;
	int result;
	result = time(NULL);
	par = &result;

	//par=&time(NULL);  //会出错


   /* 输出实际值 */

	printf("Number of seconds: %ld\n", *par);
}


void get_time(unsigned long *pt)   // 参数是指针 那么指针用于接收地址，所以传地址进来
{
	*pt = time(NULL);  // 因为pt接收了地址 ,*pt 解引用指向sec 去存time（NULL）

	//printf("Number of seconds: %ld\n", *pt);

	return;

}


int main()
{

	//test1();  // 没把指针传给函数的写法
	// 指针传给函数的写法如下：
	unsigned long sec;
	get_time(&sec);
	printf("Number of seconds: %ld\n", sec);

	return 0;
}

