#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int x = 0;
	int n = 0;
	int i = 0;
	n = sizeof(arr) / sizeof(arr[0]);
	printf("������һ������");
	scanf("%d",&x);
	while(1)
	{
		if (arr[i] == x)
		{
			printf("������λ���ǣ�%d ", (i + 1));
			break;
		}
		else if(i < n)
			i++;
		else
		{
			printf("��ֵ����������!!!!��");
			break;
		}
	}
	return 0;
}