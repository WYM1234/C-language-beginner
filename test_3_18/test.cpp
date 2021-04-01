#include <stdio.h>
#include <string.h>

#define MAX 10   //define定义常量

//枚举常量
//一一列举
//性别、三原色、星期

//枚举关键字-enum

enum Sex
{
	MALE,   //枚举常量
	FEMALE,
	SECRET
};

int main()
{
	char arr1[] = "abc";//数组
	//"abc"--'a','b','c','\0'（值是0）
	char arr2[] = { 'a','b','c',0 };//没有结束标志
	//char arr3[3] = "abc";
	int a = 10;
	int* p = &a;
	printf("dizhi=%p\n", p);
	int num = 4;   //变量
	const int age = 8;  //const-常属性，age是常变量（本质上还是变量），后期不能改变
	3;//字面常量
	enum Sex human = MALE; 
	printf("%d\n", human);//0
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", "am\32");
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//随机值
	printf("%d\n", strlen("c:\test\32\test.c"));
	//\32---32是2个8进制数字
	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
	return 0;
}