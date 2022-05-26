#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//
//实现函数init（）初始化数组
//void init(int* arr)
//{
//	int i;
//	int brr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0,11 };
//	for (i = 0; i < 11; i++)
//	{
//		arr[i] = brr[i];
//	}
//}
////实现empty（）清空数组、
//void empty(int* arr)
//{
//	int i;
//	for (i = 0; i < 11; i++)
//	{
//		arr[i] = 0;
//	}
//}
////实现reverse（）函数完成数组元素的逆置。
//void reverse(int* arr)
//{
//	//int i,t;
//	////int sz = sizeof(*arr) / sizeof(arr[0]);
//	//for (i = 0; i < 5; i++)
//	//{
//	//	t = arr[i];
//	//	arr[i] = arr[9- i];
//	//	arr[9- i] = t;
//	//}
//	int left = 0;
//	int right = 10;
//	int temp = 0;
//	while (left <=right)
//	{
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[11] = { 0 };
//	int n;
//	init( arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("初始化arr=");
//	for (n = 0; n < sz; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	empty(arr);
//	printf("\n清空后arr=");
//	for (n = 0; n < sz; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	init(arr);
//	reverse(arr);
//	printf("\n倒置后arr=");
//	for (n = 0; n < sz; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}





//5.实现一个函数，判断一个数是不是素数。
#include<math.h>
int prime_num(int i)
{
	int j ;
	for (j = 2; j <=sqrt(i); j++)
	{
		if (i%j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n ;
	//scanf("请输入一个数:%d",&n);//！！！！！scanf函数格式不对！！！！！
	scanf("%d", &n);
	if (prime_num(n) == 1)
	{
		printf("这个数是素数!\n", n);
	}
	else
		printf("这个数不是素数！！！\n", n);

	return 0;
}