 /*��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿

�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ���5�켴����ĵڼ��죬
��������������������·ݴ���3ʱ�迼�Ƕ��һ�졣*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() 
//{
//	int year, month, day,i,result;
//	int sum = 0;
//	int length = 0;
//	int count = 1;
//	printf("�������ꡢ�¡��գ���ʽΪ����,��,�գ�2015,12,10��\n");
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
//				if (year%400==0 || (year%4==0 && year%100==0))  // ����
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
//	printf("������һ��ĵ�%d��", result);
//
//
//	return 0;
//}


int main()
{
	int year, month, day, sumday = 0;
	int monthday[12]= { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	printf("�������ꡢ�¡��գ���ʽΪ����,��,�գ�2015,12,10��\n");
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