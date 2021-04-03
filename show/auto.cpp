#include<stdio.h>
#include<string.h>
#include<Windows.h>

int main()
{
	char arr1[] = "0123456789876543210";
	char arr2[] = "*******************";
	int start = 0;
	//int end = sizeof(arr1) / sizeof(arr1[0])-2;//数组中最后一位是\0，占一位
	int end = strlen(arr1) - 1;
	printf("%s\n", arr2);
	while (start<=end)
	{		
		arr2[start] = arr1[start];
		start++;
		arr2[end] = arr1[end];
		end--;
		Sleep(1000);
		system("cls");
		printf("%s\n", arr2);
	}
	return 0;
}