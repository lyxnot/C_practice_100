#include <stdio.h>
int main(int argc, const char * argv[])
{
	int array[] = { 1, 4, 7, 2, 5, 8, 3, 6, 9 };
	int count = sizeof(array) / sizeof(array[0]);   //����������Ԫ�صĸ���
	int index[9]; //��������
	int flag = 1;   //��ʶλ���������������Ż�ð��������1��״̬Ϊ����״̬��0Ϊ����״̬

	for (int i = 0; i < count; i++) {
		index[i] = i;  //�������������鸳ֵΪԭ������±�
	}
	for (int i = 0; i < count - 1 && 1 == flag; i++) {  //�������ж��Ƿ�������״̬��������򣬾Ͳ��������ˣ��Ͳ�����ѭ����
		flag = 0;    //ÿ�ν�ѭ������ǰ�ٶ�����״̬
		for (int j = 0; j < count - i - 1; j++) {
			if (array[index[j]] > array[index[j + 1]]) {  //����Ԫ��֮�����αȽϴ�С
				int temp = 0;
				temp = index[j];
				index[j] = index[j + 1];
				index[j + 1] = temp;
				flag = 1;     //������������ݽ�������ô�϶�������״̬��������һ���ٴν�ѭ������
			}
		}
	}
	for (int i = 0; i < count; i++) {
		printf("array[%d] = %d\n", index[i], array[index[i]]);
	}


	return 0;
}