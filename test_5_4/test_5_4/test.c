
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//n的阶乘
/*
int main()
{
	int n;
	int ret;
	int a=0;
	printf("输入需要阶乘的数字:");
	scanf("%d",&a);
	for (n = 1,ret=1;n<=a; n++)
	{
		ret = ret *n;
	}
	printf("阶乘的结果： %d", ret);
	system("pause");
	return 0;
}*/
//1到n的阶乘和
/*
int main()
{
	int SUM;
	int n;
	int ret;
	int a;
	printf("输入需要阶乘和的数字:");
	scanf("%d", &a);
	for (SUM = 0,ret=1,n=1;n<(a+1);n++)
	{
	ret=ret*n;
	//	for (n = 1, ret = 1; n<(a + 1); n++)
	//{
	//	ret = ret *n;
	//}
	SUM += ret;
    }
	printf("1！+2！...+n!= %d", SUM);
	system("pause");
	
	return 0;
}
*/


