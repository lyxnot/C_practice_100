


#include<stdio.h>


int main()
{
	unsigned short input_data[] = { 0,1,0,0,1,1,0,0,0,1,0,1,1,1,0,1,1,1,1,0,0 };  // 数据流
	unsigned short length = sizeof(input_data) / sizeof(input_data[0]); // 长度
	unsigned short word[10] = { 0 };  // 开数组用来存word
	unsigned short word_num;  // word的个数

	/*根据长度求需要word的个数*/
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
			for (int j= 0; j < 16; j++)   // 共放16位
			{
				word[i] |= (input_data[length - 1 - j] & 1) << j;
			}

			length=length- 16;  // 判断放16位后，所剩长度
			
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