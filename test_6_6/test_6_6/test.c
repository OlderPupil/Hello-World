#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15       0000 1111       4 个 1
//程序原型：
//int  count_one_bits(unsigned int value)
//{
//	// 返回 1的位数
//}
//
//
////循环下的按位与
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



//减少循环的方法
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


//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//

//int main()
//{
//	int odd, even;
//	int n = 0;
//	scanf("%d", &n);
//	//奇数位
//	for (odd = 0; odd <=30; odd += 2)
//	{
//		printf("%d ", (n>>odd)&1);
//	}
//	printf("\n");
//	//偶数位
//	for (even = 1; even <=31; even += 2)
//	{
//		printf("%d ", (n>>even & 1));
//	}
//	return 0;
//}




//3. 输出一个整数的每一位。
//
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，
//有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

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


