#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
//
//
//void multiplication_table(int n)
//{
//	int i,j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf(" %2d*%-2d=%-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	multiplication_table( i );
//	return 0;
//}

//2.ʹ�ú���ʵ���������Ľ���
//void exchange(int* x, int* y)
//{
//	int tem = 0;
//	tem = *x;
//	*x =* y;
//	*y = tem;
//	
//}
//
//int main()
//{
//	int a = 11;
//	int b = 88;
//	printf("����ǰ��a=%d ,b=%d\n", a, b);
//	exchange(&a, &b);
//	printf("������a=%d ,b=%d\n ", a, b);
//	return 0;
//}

//3.ʵ��һ�������ж�year�ǲ������ꡣ

int Leap_Year(int n)
{
	//if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0))
	//{
	//	return 1;
	//}
	//else
	//	return 0;//��Ҫ����ֵ�ĺ����������з�֧�б����ж�Ӧ�ķ���ֵ������ϵͳ���Զ����ɷ���ֵ��������
	return((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0));
}
int main()
{
	int year = 1;
	for (year = 1; year <= 2022; year++)
	{
		if( Leap_Year(year)==1)
		printf("%d ", year);
	}
	return 0;
}