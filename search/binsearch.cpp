#include <stdio.h>

/*int main()//���������������ĳ�����֣��÷������Ӷȸ�
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int goal = 7;
	int i = 0;
	for (; i < 10; i++)
	{
		if (arr[i] == goal)
		{
			printf("�ҵ���,�����������е��±��ǣ�%d\n", i);
			break;
		}
	}
	if (10 == i)
	{
		printf("don't find it");
	}
	return 0;
}*/

int main()   //�۰���ң����͸��Ӷ�
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int min = 0;
	int max = sizeof(arr) / sizeof(arr[0]);
	int goal = 7;
	int mid = 0;
	while (min<=max)
	{
		mid = (min + max) / 2;
		if (arr[mid] == goal)
		{
			printf("�ҵ��ˣ��������������е��±��ǣ�%d\n", mid);
			break;
		}
		else if (arr[mid] > goal)
		{
			max = mid-1;
		}
		else
		{
			min = mid+1;
		}
	}
	if (min >max)
	{
		printf("�Ҳ���");
	}
	return 0;
}