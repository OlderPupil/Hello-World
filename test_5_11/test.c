#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ת�����������Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);//24 18
//	int t = 0;
//
//	while (t = m%n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ����%d\n", n);
//
//	��С������ = m*n/���Լ��;
//
//	return 0;
//}

////��������Ϸ
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	
//	printf("*****************************************\n");
//	printf("**************  ��  ѡ  ��  *************\n");
//	printf("**********  1.START    0.EXIT ***********\n");
//	printf("*****************************************\n");
//}
//
//void game()
//{
//	printf("��Ϸ��ʼ���������\n");
//	int ret = rand() % 100 + 1;
//	//printf("%d ", ret);
//	while (1)
//	{
//		int b = 0;
//		scanf("%d", &b);
//		if (ret > b)
//		{
//			printf("̫С��\n");
//		}
//		else if (ret < b)
//		{
//			printf("̫����\n");
//		}
//		else
//		{
//            printf("��ϲ�㣬����ˣ�����\n");
//			break;
//		}	
//	}
//}
//
//int main()
//{
//	int a = 0;
//	srand((unsigned int) time(NULL));
//	menu();//�˵�
//	//��ʼ��Ϸ
//	do
//	{
//	/*	if (1 == a)
//		{
//			printf("��Ϸ��ʼ���������\n");
//			game();
//		}
//		else if (0 == a)
//		{
//			printf("��Ϸ����\n");
//			break;
//		}
//		else
//			printf("ѡ�����������ѡ��\n");*/
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//				printf("��Ϸ����\n");
//				break;
//		default:
//				printf("ѡ�����������ѡ��\n");
//				break;
//		}
//	} 
//	while (a);
//	return 0;
//}

//100--200���ڵ�����
//int main()
//{
//	int i;
//	int j;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i==j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d \n", count);
//	return 0;
//}


//# include <math.h>
//int main()
//{
//	int i;
//	int j;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag==1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d \n", count);
//	return 0;
//}

//����˷��ھ���

//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = a; b < 10; b++)
//		{
//			c = a*b;
//			printf(" %d*%d=%d \n",a,b,c);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	for (b = 1; b < 10; b++)
//	{
//		for (a = 1; a <= b; a++)
//		{
//			c = a*b;
//			printf("%d*%d=%-2d  ", a, b, c);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//1. �����������α�����ֵ��������ֵ�����ݽ��н�����
int main()
{
	int a = 11;
	int b = 34;
	int x = 0;
	printf("a=%d  b=%d\n", a, b);
	x = a;
	a = b;
	b = x;
	printf("a=%d  b=%d\n", a, b);
	return 0;
}

//2. ����������ʱ���������������������ݣ������⣩