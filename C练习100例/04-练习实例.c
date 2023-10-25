 /*题目：输入某年某月某日，判断这一天是这一年的第几天？

程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，
特殊情况，闰年且输入月份大于3时需考虑多加一天。*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() 
//{
//	int year, month, day,i,result;
//	int sum = 0;
//	int length = 0;
//	int count = 1;
//	printf("请输入年、月、日，格式为：年,月,日（2015,12,10）\n");
//	scanf("%d,%d,%d", &year, &month, &day);
//	for (i = 1; i <=12; i++)
//	{
//		if (i<8)
//		{
//			if (i%2!=0)
//			{
//				sum += 31;
//				count++;
//			}
//			else if (i==2)
//			{
//				if (year%400==0 || (year%4==0 && year%100==0))  // 闰年
//				{
//					sum += 29;
//					count++;
//				}
//				else
//				{
//					sum+=28;
//					count++;
//				}
//			}
//			else
//			{
//				sum += 30;
//				count++;
//			} 
//		}
//		else
//		{
//			if (i % 2 == 0 ) {
//				sum += 31;
//				count++;
//			}
//			else{
//				sum += 30;
//				count++;
//			}
//		}
//
//		if (month==count)
//		{
//			break;
//		}
//
//
//	}
//
//	result = sum + day;
//	printf("这是这一年的第%d天", result);
//
//
//	return 0;
//}


int main()
{
	int year, month, day, sumday = 0;
	int monthday[12]= { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	printf("请输入年、月、日，格式为：年,月,日（2015,12,10）\n");
	scanf("%d,%d,%d", &year, &month, &day);
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
	{
		monthday[1] = 29;
	}
	for (size_t i = 0; i < month-1; i++)
	{
		sumday += monthday[i];
	}
	sumday += day;
	printf("%d\n", sumday);

	return 0;
}