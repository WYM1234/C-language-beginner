#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>

int main()
{
	int i = 1;
	while (i <= 100)
	{
		//if (1 == i % 2)    //如果只打一个=，程序会报错
		//{
		//	printf("%d ", i);
		//}
		if (i = 0)     //赋值也能跑，不容易察觉出错
		{
			printf("%d", i);
		}
		i++;
	}
	return 0;
}
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//
//	printf("请输入密码：>");
//	scanf("%s", password);
//	//输入完之后回车，缓冲区还剩余一个'\n'
//	//读取一下'\n'清空缓冲区
//	//getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		  //将缓冲区读完
//	}
//	printf("请确认（Y/N）：>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}