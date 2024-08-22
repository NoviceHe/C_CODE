#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//		}
//		if (year % 400 == 0)
//			printf("%d ", year);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i / 2; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > i / 2)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 5;//要找的数
//	int left = 0;//左下标
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;//右下标
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下表是：%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("******************\n");
	printf("***0.exit 1.play***\n");
	printf("******************\n");
}

void game()
{
	int num = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("请猜数字:>\n");
		scanf("%d", &num);
		if (num < ret)
		{
			printf("猜错了，猜小了\n");
		}
		else if (num > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL))；
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}