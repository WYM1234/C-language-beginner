#include <stdio.h>

/*int main()//在有序的数组中找某个数字，该方法复杂度高
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int goal = 7;
	int i = 0;
	for (; i < 10; i++)
	{
		if (arr[i] == goal)
		{
			printf("找到了,该数在数组中的下标是：%d\n", i);
			break;
		}
	}
	if (10 == i)
	{
		printf("don't find it");
	}
	return 0;
}*/

int main()   //折半查找，降低复杂度
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
			printf("找到了，该数字在数组中的下标是：%d\n", mid);
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
		printf("找不到");
	}
	return 0;
}