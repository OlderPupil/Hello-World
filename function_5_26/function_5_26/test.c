#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//1 1 2 3 5 8 13 21 34 55.......



////�ݹ鷨
//int Fibon_Num(int n)
//{
//	if (n <= 2)
//		return 1;
//	if (n > 2)
//		return(Fibon_Num(n - 2) + Fibon_Num(n - 1));
//}

//�ǵݹ鷨
//int Fibon_Num(int n)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//		return 1;
//	else
//	for (i = 3; i <= n; i++)
//	{
//	    c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=Fibon_Num(n);
//	printf("��%d��쳲���������>:%d\n",n, ret);
//	return 0;
//}

//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//int expon(int n, int k)
//{
//	int c = 0;
//	if (k ==1)
//		return n;
//	else
//	{
//		return(n*expon(n, k - 1));
//	}
//}
//
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	int k = 0;
//	scanf("%d", &n);
//	scanf("%d", &k);
//	ret=expon(n, k);
//	printf("n^k=%d\n", ret);
//	return 0;
//}

//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

//int DigitSum(int n)
//{
//	if (n / 10 == 0)
//		return n;
//	else
//		return(n % 10 + DigitSum(n / 10));
//}
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	printf("������һ���Ǹ�����>:");
//	scanf("%d", &n);
//	sum=DigitSum(n);
//	printf("������֮��sum=%d\n", sum);
//	return 0;
//}

//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ


//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

//void reverse_string(char * string,int len)
//{
//	char tem;
//	if (len>1)
//	{
//		tem = *string;
//		*string = string[len - 2];
//		string[len - 2] =tem;
//		reverse_string((string + 1), len - 2);
//	}
//}
//int main()
//{
//	char arr[] = "Hello my sweet honey";
//	int i, len;
//	len = sizeof(arr)/sizeof(arr[0]);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//	reverse_string(arr, len);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen

//�ݹ�
//int Strlen1(char * str)
//{
//	if (str[0] == 0)
//		return 0;
//	else
//	    return(1 + Strlen1(str + 1));
//}
//
////�ǵݹ�
//int Strlen2(char * str)
//{
//	int count = 0;
//	int i = 0;
//	while (1)
//	{
//		if (str[i] != 0)
//			i++;
//		else
//			return i;
//	}
//}
//
//void str_printf(char * string, int len)
//{
//	int i;
//	for (i = 0; i < len; i++)
//		printf("%c", string[0]);
//}
//
//int main()
//{
//	char str[] = "Hello sweet honey";
//	int ret = 0;
//	ret = Strlen1(str);
//	printf("%d\n", ret);
//	return 0;
//}

//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�

//�ݹ�
//int fact1(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//		return(n*fact1(n - 1));
//}
//
////�ǵݹ�
//int fact(int n)
//{
//	int i = 1;
//	int ret=1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fact(n);
//	printf("n!=%d\n", ret);
//}

//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

void int_printf(int a)
{
	if (a > 9)
	{
		int_printf(a / 10);
	}
	printf("%d ", a%10);
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int_printf(a);
	return 0;
}