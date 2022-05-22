#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���ֲ��ҷ�,�ҵ�Ŀ�������±�

//���ֲ��Һ���
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
	scanf("������1����10��Ҫ���ҵ��֣�%d", &k);
	ret = binary_search(&arr, k, sz);
	if (ret == -1)
	{
		printf("�Ҳ���Ŀ������");
	}
	else
		printf("����Ŀ�������±���>: %d\n", ret);
	return 0;
}

