 /*��Ŀ��ɾ��һ���ַ����е�ָ����ĸ���磺�ַ��� "aca"��ɾ�����е� a ��ĸ��*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char*  deleteCharacters(char *str, char *charset)
{
	int hash[256];
	if (NULL==charset)
		return str;
	for (int i = 0; i < 256; i++)
		hash[i] = 0;
	for (int i = 0; i < strlen(charset); i++)
		hash[charset[i]] = 1;
	int currentIndex = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (!hash[str[i]]) {
			str[currentIndex++] = str[i];
			printf("%s\n", str);
		}
	}
	printf("%s\n", str);
	str[currentIndex]='\0';   // ȥ��ĳ�±���������
	return str;

}



int main()
{
	

	char s[2] = "a";
	char s2[5] = "abca";
	printf("%s\n", deleteCharacters(s2, s));

	return 0;
}