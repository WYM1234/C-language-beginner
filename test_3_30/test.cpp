#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>

int main()
{
	int i = 1;
	while (i <= 100)
	{
		//if (1 == i % 2)    //���ֻ��һ��=������ᱨ��
		//{
		//	printf("%d ", i);
		//}
		if (i = 0)     //��ֵҲ���ܣ������ײ������
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
//	printf("���������룺>");
//	scanf("%s", password);
//	//������֮��س�����������ʣ��һ��'\n'
//	//��ȡһ��'\n'��ջ�����
//	//getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		  //������������
//	}
//	printf("��ȷ�ϣ�Y/N����>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}