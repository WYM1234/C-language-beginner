#include <stdio.h>
#include <string.h>

#define MAX 10   //define���峣��

//ö�ٳ���
//һһ�о�
//�Ա���ԭɫ������

//ö�ٹؼ���-enum

enum Sex
{
	MALE,   //ö�ٳ���
	FEMALE,
	SECRET
};

int main()
{
	char arr1[] = "abc";//����
	//"abc"--'a','b','c','\0'��ֵ��0��
	char arr2[] = { 'a','b','c',0 };//û�н�����־
	//char arr3[3] = "abc";
	int a = 10;
	int* p = &a;
	printf("dizhi=%p\n", p);
	int num = 4;   //����
	const int age = 8;  //const-�����ԣ�age�ǳ������������ϻ��Ǳ����������ڲ��ܸı�
	3;//���泣��
	enum Sex human = MALE; 
	printf("%d\n", human);//0
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", "am\32");
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//���ֵ
	printf("%d\n", strlen("c:\test\32\test.c"));
	//\32---32��2��8��������
	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
	return 0;
}