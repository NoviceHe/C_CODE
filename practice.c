#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int compare(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("��������������\n");
//	scanf("%d%d", &x, &y);
//	int max = compare(x, y);
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j < 12; j++)
//		{
//			if ((i == 0 || i == 1) && (j == 5 || j == 6))
//			{
//				printf("*");
//			}
//			else if(i==2||i==3)
//			{
//				printf("*");
//			}
//			else if ((i == 4 || i == 5) && (j == 4 || j == 7))
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}	
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	printf("����һ������\n");
//	scanf("%d", &i);
//	if (i % 5 == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}

int main()
{
	int x = 0;
	int y = 0;
	int num1, num2,c=0;
	printf("������������\n");
	scanf("%d%d", &x, &y);
	if (x > y)
	{
		num1 = x;
		num2 = y;
	}
	else
	{
		num1 = y;
		num2 = x;
	}
	while (num1 % num2)//ģΪ0����ѭ��
	{
		c = num1 % num2;
		num1 = num2;
		num2 = c;
	}
	printf("���Լ��=%d", c);
	return 0;
}