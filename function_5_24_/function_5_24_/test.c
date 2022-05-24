#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
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

//2.使用函数实现两个数的交换
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
//	printf("交换前：a=%d ,b=%d\n", a, b);
//	exchange(&a, &b);
//	printf("交换后：a=%d ,b=%d\n ", a, b);
//	return 0;
//}

//3.实现一个函数判断year是不是润年。

int Leap_Year(int n)
{
	//if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0))
	//{
	//	return 1;
	//}
	//else
	//	return 0;//需要返回值的函数，在所有分支中必须有对应的返回值，否则系统会自动生成返回值！！！！
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