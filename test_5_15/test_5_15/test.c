#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
//
//int main()
//{
//	int arr1[] = { 1, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int arr2[] = { 0, 9, 8, 7, 6, 5, 4, 3, 2, };
//	int att[20] = { 0 };
//	int i;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("arr1=");
//	for (i = 0; i <sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("arr2=");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		att[i] = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = att[i];
//	}
//	printf("\n");
//	printf("arr1=");
//	for (i = 0; i <sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("arr2=");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//
//		//memset(arr1, '*', 9);
//	//printf("arr2=%s ", arr2);
//	return 0;
//}
//2. ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
//#include <math.h>
//int main()
//{
//	int i;
//	double  SUM = 0;
//	//int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		double pw = pow(-1, i + 1);
//		SUM += pw / i;
//		//SUM += flag/i ;
//		//flag = -flag;
//	}
//	printf("SUM=%1f \n  ", SUM);
//	return 0;
//}

int main()
{
	int i;
	double SUM= 0;
	for (i = 1; i <= 100; i +=2 )
	{
		SUM += 1.0/ i -1.0/ (i + 1);//ע���ʱ������ת����1/i���ΪС����Ϊ0����1.0/iС������������ʾ
	}
	printf("SUM= %lf\n ",SUM);
	return 0;
}

//int main()
//{
//	int i;
//	double SUM = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			SUM -= 1.0 / i;//ע���ʱ������ת����1/i���ΪС����Ϊ0����1.0/iС������������ʾ��
//		else
//			SUM += 1.0/ i;
//	}
//	printf("SUM=%lf \n", SUM);
//	return;
//}
//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9��