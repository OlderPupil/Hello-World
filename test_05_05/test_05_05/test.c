#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//
int main()
{
	int arr[] = { 1, 2 ,3 ,4, 5 ,6, 7, 8, 9, 0 };
	int sz = 0;
	int left = 0;
	int right = 0;
	int mid = 0;
	int k = 0;
	printf("请输入要查找的目标数->");
	//k = getchar();
	scanf("%d", &k);
	//sz = strlen(arr) / arr[0];
	sz = sizeof(arr) / sizeof(arr[0]);
	right = sz - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (k == arr[mid])
		{
			printf("目标数的下标是：%d ", mid);
			break;
		}
		else if (k < arr[mid])
		{
			right = mid-1;
		}
		else  if(k>arr[mid])
		{
			left = mid+1;
		}
	}
	 if (left>right)
	{
		printf("找不到目标数！！！！");
	}
		
	return 0;
}