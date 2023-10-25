 /*题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。

程序分析：学会分解出每一位数*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i,j;
	char str[10];
	//scanf("%s", str);
	//gets(str);
	gets_s(str);
	int length = strlen(str);     // 统计中文字符会错误？为什么
	printf("%d",length);
	printf("%s", str);
	for (i = 0; i < length; i++)
	{
		j = length - 1;
		if (i==j)
		{
			printf("是回文");
			break;
		}
		for ( j ; j >=0; j--)
		{
			if (str[i]==str[j])
			{
				length--;
				break;
			}
			else
			{
				printf("不是回文");
				return 0;
			}
		}

	}
	



	return 0;
}