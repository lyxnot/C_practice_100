#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int find_substr(char *str,char *substr)
{
	int num = 0;
	while (*str!='\0')
	{
		if (*str!=*substr)
		{
			num++;
			str++;
			continue;
		}
		char *temp_str = str;
		char *temp_substr = substr;
		while (*temp_substr!='\0')
		{
			if (*temp_str!=*temp_substr)   //ƥ��ʧ��
			{
				num++;
				str++;
				break;
			}
			temp_str++;
			temp_substr++;
		}
		if (*temp_substr=='\0')
		{
			return num;
		}
		
	}
	return -1;

}

void test01() 
{
	char Str[] = "helloloveworld";
	int ret=find_substr(Str, "love");
	if (ret!=-1)
	{
		printf("ƥ���Ӵ��ɹ��ˣ�ƥ��ĵ�һ����ĸ���±�λ��Ϊ%d\n", ret);
	}
	else
	{
		printf("û��ƥ��ɹ�\n");
	}

}

int main()
{
	test01();

	return 0;
}

