#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15       0000 1111       4 �� 1
//����ԭ�ͣ�
//int  count_one_bits(unsigned int value)
//{
//	// ���� 1��λ��
//}
//
//
////ѭ���µİ�λ��
//int count_one_bits(unsigned int value)
//{
//	int i;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (value & (1 << i))
//			count++;
//		/*if ((value >> i) & 1)
//		{
//			count++;
//		}*/
//	}
//	return count;
//
//}
//0000000000001111
//0000000000001110
//0000000000001101
//0000000000001100



//����ѭ���ķ���
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value)
//	{
//		count++;
//		value = value&(value - 1);
//	}
//	return count;
//}
//
//
//
//
//
//int main()
//{
//	int a = 0;
//	int ret = 0;
//	scanf("%d", &a);
//	ret = count_one_bits(a);
//	printf("%d", ret);
//	return 0;
//}


//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//

//int main()
//{
//	int odd, even;
//	int n = 0;
//	scanf("%d", &n);
//	//����λ
//	for (odd = 0; odd <=30; odd += 2)
//	{
//		printf("%d ", (n>>odd)&1);
//	}
//	printf("\n");
//	//ż��λ
//	for (even = 1; even <=31; even += 2)
//	{
//		printf("%d ", (n>>even & 1));
//	}
//	return 0;
//}




//3. ���һ��������ÿһλ��
//
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У�
//�ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7

int main()
{
	int a = 0;
	int b = 0;
	int count = 0;
	int ret = 0;
	scanf("%d %d", &a, &b);
	ret = a^b;
	while (ret)
	{
		count++;
		ret = ret&(ret - 1);
	}
	printf("%d \n", count);
	return 0;
}


