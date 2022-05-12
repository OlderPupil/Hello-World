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
//		printf("请输入密码：");
//		scanf("%s/n", &arr2);
//		if (strcmp(arr2, "123zxc") == 0)
//		{
//			printf("密码正确");
//			break;
//		}
//		else
//			printf("密码错误！！！");
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
	//猜数字游戏的实现
	//1. 生成随机数
	//rand函数返回了一个0-32767之间的数字
	//时间 - 时间戳


	int ret = rand() % 100 + 1;//%100的余数是0-99，然后+1，范围就是1-100
	//printf("%d\n", ret);

	//2. 猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
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
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,重新选择\n");
			break;
		}

	} while (input);
	return 0;
}