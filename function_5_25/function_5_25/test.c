#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//4.
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//
//ʵ�ֺ���init������ʼ������
//void init(int* arr)
//{
//	int i;
//	int brr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0,11 };
//	for (i = 0; i < 11; i++)
//	{
//		arr[i] = brr[i];
//	}
//}
////ʵ��empty����������顢
//void empty(int* arr)
//{
//	int i;
//	for (i = 0; i < 11; i++)
//	{
//		arr[i] = 0;
//	}
//}
////ʵ��reverse���������������Ԫ�ص����á�
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
//	printf("��ʼ��arr=");
//	for (n = 0; n < sz; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	empty(arr);
//	printf("\n��պ�arr=");
//	for (n = 0; n < sz; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	init(arr);
//	reverse(arr);
//	printf("\n���ú�arr=");
//	for (n = 0; n < sz; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}





//5.ʵ��һ���������ж�һ�����ǲ���������
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
	//scanf("������һ����:%d",&n);//����������scanf������ʽ���ԣ���������
	scanf("%d", &n);
	if (prime_num(n) == 1)
	{
		printf("�����������!\n", n);
	}
	else
		printf("�������������������\n", n);

	return 0;
}