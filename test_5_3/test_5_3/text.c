#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*打印100~200之间的素数
int main()
{
	int i = 100;
	while (i >= 100 && i <= 200)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;
	}
	return 0;
}
*/
/*2. 输出乘法口诀表
int main()
{
	int a = 1;
	int b = 1;
	int c = 0;
	while (a <= 9)
	{

		while (b <= 9)
		{
			c = a*b;
			printf("%d*%d=%d ", a, b, c);
			b++;
		}
		printf("\n");
		b=a++;

	}
	return 0;
*/
//3. 判断1000年---2000年之间的闰年
int main()
{
	int i = 1000;
	printf("1000年--2000年之间的闰年:\n");
	while (i >= 1000 && i <= 2000)
	{
		if (i % 4 == 0)
		{
			printf("%d ", i);
			i++;
		}
		else 
			i++;
	}
	return 0;

}