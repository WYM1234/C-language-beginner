#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*���㵥�����ֵĽ׳�
int main()
{
	int n = 0;  //����Ҫ�������
	int fac = 1;//�洢�׳˽��
	printf("��������Ҫ����Ľ׳�����>");
	scanf("%d", &n);
	while(n>=1) // ʹ��whileѭ��
	{
		fac = fac * n;
		n--;
	}
	printf("�����Ľ׳˽��Ϊ��%d\n", fac);
	return 0;
}*/

//����1��ĳ�����ֵĽ׳�֮��
int main()
{
	int num = 0;
	int i = 1;
	int fac = 1;
	int sum = 0;
	int j = 0;
	printf("���������֣�>");
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
	printf("1�������ֵĽ׳�֮�͵Ľ���ǣ�%d\n", sum);
	return 0;
}