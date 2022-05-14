#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//求10 个整数中最大值。
//int main()
//{
//	int arr[] = { 1, 2, 4, 5, 7, 8, 9, 6, 11, 34 };
//	int i;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>arr[i+1])
//		{
//			max = arr[i];
//		}
//		else
//			max = arr[i+1];
//	}
//	printf("%d ", max);
//	return 0;
//}
//将三个数按从大到小输出。

int main()
{
	int arr[] = {2,45,7,4,4,56,77,8,36,9,78,99,64,79};
	int i = 0;
	int j = 0;
	for (i = 0; i < 13; i++)
	{
		for (j = 0; j <(14-i); j++)
		{
			if (arr[j]<arr[j + 1])
			{
				int ret = 0;
				ret = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = ret;
			}
		}
	}
	for (i = 0; i < 14;i++)
	printf(" %d ", arr[i]);
	return 0;
}
