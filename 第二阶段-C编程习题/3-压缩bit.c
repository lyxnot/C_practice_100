


#include<stdio.h>


int main()
{
	unsigned short input_data[] = { 0,1,0,0,1,1,0,0,0,1,0,1,1,1,0,1,1,1,1,0,0 };  // ������
	unsigned short length = sizeof(input_data) / sizeof(input_data[0]); // ����
	unsigned short word[10] = { 0 };  // ������������word
	unsigned short word_num;  // word�ĸ���

	/*���ݳ�������Ҫword�ĸ���*/
	if (length%16==0)
	{
		word_num = length / 16;
	}
	else
	{
		word_num = length / 16 + 1;
	}

	for (int i = 0; i < word_num; i++)  
	{
		if (length>=16)
		{
			for (int j= 0; j < 16; j++)   // ����16λ
			{
				word[i] |= (input_data[length - 1 - j] & 1) << j;
			}

			length=length- 16;  // �жϷ�16λ����ʣ����
			
		}
		else
		{
			for (int j = 0; j < length; j++)
			{
				word[i] |= (input_data[length - 1 - j] & 1) << j;
			}
		}


	}

	for (int i = 0; i < word_num; i++)
	{
		printf("%x\n", word[i]);
	}

	
	return 0;

}