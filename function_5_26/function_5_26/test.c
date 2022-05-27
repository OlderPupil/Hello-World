#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.递归和非递归分别实现求第n个斐波那契数。
//
//2.编写一个函数实现n^k，使用递归实现
//
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

//1.递归和非递归分别实现求第n个斐波那契数。
//1 1 2 3 5 8 13 21 34 55.......



////递归法
//int Fibon_Num(int n)
//{
//	if (n <= 2)
//		return 1;
//	if (n > 2)
//		return(Fibon_Num(n - 2) + Fibon_Num(n - 1));
//}

//非递归法
//int Fibon_Num(int n)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//		return 1;
//	else
//	for (i = 3; i <= n; i++)
//	{
//	    c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=Fibon_Num(n);
//	printf("第%d个斐波那契数是>:%d\n",n, ret);
//	return 0;
//}

//2.编写一个函数实现n^k，使用递归实现
//int expon(int n, int k)
//{
//	int c = 0;
//	if (k ==1)
//		return n;
//	else
//	{
//		return(n*expon(n, k - 1));
//	}
//}
//
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	int k = 0;
//	scanf("%d", &n);
//	scanf("%d", &k);
//	ret=expon(n, k);
//	printf("n^k=%d\n", ret);
//	return 0;
//}

//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

//int DigitSum(int n)
//{
//	if (n / 10 == 0)
//		return n;
//	else
//		return(n % 10 + DigitSum(n / 10));
//}
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	printf("请输入一个非负整数>:");
//	scanf("%d", &n);
//	sum=DigitSum(n);
//	printf("各数字之和sum=%d\n", sum);
//	return 0;
//}

//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//
//5.递归和非递归分别实现strlen
//6.递归和非递归分别实现求n的阶乘
//7.递归方式实现打印一个整数的每一位


//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。

//void reverse_string(char * string,int len)
//{
//	char tem;
//	if (len>1)
//	{
//		tem = *string;
//		*string = string[len - 2];
//		string[len - 2] =tem;
//		reverse_string((string + 1), len - 2);
//	}
//}
//int main()
//{
//	char arr[] = "Hello my sweet honey";
//	int i, len;
//	len = sizeof(arr)/sizeof(arr[0]);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//	reverse_string(arr, len);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//5.递归和非递归分别实现strlen

//递归
//int Strlen1(char * str)
//{
//	if (str[0] == 0)
//		return 0;
//	else
//	    return(1 + Strlen1(str + 1));
//}
//
////非递归
//int Strlen2(char * str)
//{
//	int count = 0;
//	int i = 0;
//	while (1)
//	{
//		if (str[i] != 0)
//			i++;
//		else
//			return i;
//	}
//}
//
//void str_printf(char * string, int len)
//{
//	int i;
//	for (i = 0; i < len; i++)
//		printf("%c", string[0]);
//}
//
//int main()
//{
//	char str[] = "Hello sweet honey";
//	int ret = 0;
//	ret = Strlen1(str);
//	printf("%d\n", ret);
//	return 0;
//}

//6.递归和非递归分别实现求n的阶乘

//递归
//int fact1(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//		return(n*fact1(n - 1));
//}
//
////非递归
//int fact(int n)
//{
//	int i = 1;
//	int ret=1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fact(n);
//	printf("n!=%d\n", ret);
//}

//7.递归方式实现打印一个整数的每一位

void int_printf(int a)
{
	if (a > 9)
	{
		int_printf(a / 10);
	}
	printf("%d ", a%10);
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int_printf(a);
	return 0;
}