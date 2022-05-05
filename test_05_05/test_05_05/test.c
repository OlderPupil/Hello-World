#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int x = 0;
	int n = 0;
	int i = 0;
	n = sizeof(arr) / sizeof(arr[0]);
	printf("请输入一个数：");
	scanf("%d",&x);
	while(1)
	{
		if (arr[i] == x)
		{
			printf("该数的位置是：%d ", (i + 1));
			break;
		}
		else if(i < n)
			i++;
		else
		{
			printf("此值不在数列中!!!!！");
			break;
		}
	}
	return 0;
}