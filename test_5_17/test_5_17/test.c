#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
//编写程序数一下 1到 100 的所有整数中出现多少个数字9。
//int main()
//{
//	int i;
//	int count = 0;
//	printf("1--100包含9的数字有：");
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9 || i % 10 == 9)
//		{
//			count++;
//			printf("%d  ", i);
//		}
//	}
//	printf("\ncount=%d ", count);
//	return 0;
//}

//1.在屏幕上输出以下图案：
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*

#include <string.h>
//int main()
//{
//	int i, j, left, right;
//	char arr[] = "***************";
//	char brr[] = "               ";
//	int sz = strlen(brr);
//	left = right = sz / 2;
//	for (i = 0; i < sz/2 ; i++)//上角型上部的替换
//	{
//
//
//		brr[left] = arr[left];
//		brr[right] = arr[right];
//		left--;
//		right++;
//		printf("%s\n", brr);
//	}
//	left++;
//	right--;
//	char crr[] = "               ";
//	for (i = 0; i < sz/2-1; i++)//三角形下部分替换
//		{
//		brr[left] = crr[left];
//		brr[right]= crr[right];
//			left++;
//			right--;
//			printf("%s\n",brr);
//		}
//	return 0;
//}



//求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//#include <math.h>
//int main()
//{
//	int i ,a,b,c;
//	double SUM = 0;
//	int count = 0;
//	printf("水仙花数：");
//	for (i = 0;i<1000; i++)//生成0~999个数
//	{
//		a = i / 100;//百位数
//		b = i%100/ 10;//十位数
//		c = i % 10;//个位数
//		SUM = pow(a, 3) + pow(b, 3) + pow(c, 3);//三个数的立方和
//		if (i==SUM)
//		{
//			printf(" %d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d \n", count);
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

//int main()
//{
//	int a = 0;
//	int Sn = 0;
//	for (a = 0; a < 10; a++)
//	{
//		Sn = 1*a+11*a+111*a+1111*a+11111*a;
//		printf(" %d ", Sn);
//	}
//	return 0;
//}

#include <stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown /s /t 120");
	again:
	printf("请输入正能力口号“你是最棒的！”，否则，电脑将在120秒内关机！！！\n请输入>:");
	scanf("%s", &input);
	if (strcmp(input, "你是最棒的！") == 0)
	{
		system("shutdown /a");
	}
	else
	{
		goto again;
	}
	return 0;
}