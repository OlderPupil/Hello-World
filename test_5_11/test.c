#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//转换除法求最大公约数
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
//	printf("最大公约数：%d\n", n);
//
//	最小公倍数 = m*n/最大公约数;
//
//	return 0;
//}

////猜数字游戏
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	
//	printf("*****************************************\n");
//	printf("**************  请  选  择  *************\n");
//	printf("**********  1.START    0.EXIT ***********\n");
//	printf("*****************************************\n");
//}
//
//void game()
//{
//	printf("游戏开始，请猜数：\n");
//	int ret = rand() % 100 + 1;
//	//printf("%d ", ret);
//	while (1)
//	{
//		int b = 0;
//		scanf("%d", &b);
//		if (ret > b)
//		{
//			printf("太小了\n");
//		}
//		else if (ret < b)
//		{
//			printf("太大了\n");
//		}
//		else
//		{
//            printf("恭喜你，答对了！！！\n");
//			break;
//		}	
//	}
//}
//
//int main()
//{
//	int a = 0;
//	srand((unsigned int) time(NULL));
//	menu();//菜单
//	//开始游戏
//	do
//	{
//	/*	if (1 == a)
//		{
//			printf("游戏开始，请猜数：\n");
//			game();
//		}
//		else if (0 == a)
//		{
//			printf("游戏结束\n");
//			break;
//		}
//		else
//			printf("选择错误，请重新选择\n");*/
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//				printf("游戏结束\n");
//				break;
//		default:
//				printf("选择错误，请重新选择\n");
//				break;
//		}
//	} 
//	while (a);
//	return 0;
//}

//100--200以内的素数
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

//输出乘法口诀表

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

//1. 给定两个整形变量的值，将两个值的内容进行交换。
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

//2. 不允许创建临时变量，交换两个数的内容（附加题）