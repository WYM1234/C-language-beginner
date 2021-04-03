#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*计算单个数字的阶乘
int main()
{
	int n = 0;  //接收要计算的数
	int fac = 1;//存储阶乘结果
	printf("请输入你要计算的阶乘数：>");
	scanf("%d", &n);
	while(n>=1) // 使用while循环
	{
		fac = fac * n;
		n--;
	}
	printf("该数的阶乘结果为：%d\n", fac);
	return 0;
}*/

//计算1到某个数字的阶乘之和
int main()
{
	int num = 0;
	int i = 1;
	int fac = 1;
	int sum = 0;
	int j = 0;
	printf("请输入数字：>");
	scanf("%d", &num);
	while (i <= num)
	{
		j = i;
		fac = 1;
		while (j >= 1)
		{
			fac = fac * j;
			j--;
		}
		sum = sum + fac;
		i++;
	}
	printf("1到该数字的阶乘之和的结果是：%d\n", sum);
	return 0;
}