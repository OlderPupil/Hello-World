#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
//
//int main()
//{
//	char arr[] = "**************************";
//	char bee[] = "Mr Zhaoqiang is a big fool";
//	int left = 0;
//	//int right = strlen("bee")-1;
//	int right = sizeof(arr) / sizeof(arr[0]) - 2;
//	//printf("%s\n",arr);
//	//printf("%s\n",bee);
//	while (left <= right)
//	{
//		arr[left] = bee[left];
//		left++;
//		arr[right] = bee[right];
//		right--;
//		printf("%s\n", arr);
//		Sleep(1000);
//		system("cls");
//		//printf("%s\n", bee);
//	}//	return 0;
////}
//
//int main()
//{
//	char arr[20] = "123zxc";
//	char arr2[20] = {0};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s/n", &arr2);
//		if (strcmp(arr2, "123zxc") == 0)
//		{
//			printf("������ȷ");
//			break;
//		}
//		else
//			printf("������󣡣���");
//	}
//
//	return 0;
//}


#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("*****************************\n");
	printf("*******  1. play     ********\n");
	printf("*******  0. exit     ********\n");
	printf("*****************************\n");
}
//
void game()
{
	//��������Ϸ��ʵ��
	//1. ���������
	//rand����������һ��0-32767֮�������
	//ʱ�� - ʱ���


	int ret = rand() % 100 + 1;//%100��������0-99��Ȼ��+1����Χ����1-100
	//printf("%d\n", ret);

	//2. ������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int  main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}