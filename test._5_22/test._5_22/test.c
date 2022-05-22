#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//二分查找法,找到目标数的下标

//二分查找函数
int binary_search(int* arr, int k, int sz)
{
	int mid = sz / 2;
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		if (k > arr[mid])
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
		else if (k < arr[mid])
		{
			right = mid - 1;
			mid = (left + right) / 2;
		}
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("请输入1——10中要查找的字：%d", &k);
	ret = binary_search(&arr, k, sz);
	if (ret == -1)
	{
		printf("找不到目标数！");
	}
	else
		printf("查找目标数的下表是>: %d\n", ret);
	return 0;
}

