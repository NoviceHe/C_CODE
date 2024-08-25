#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("输入一个整数\n");
//	scanf("%d", &n);
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 32; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}

//int count_one_bit(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 31; i >= 0; --i)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", count_one_bit(n));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//  printf("交换前：a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//    printf("交换前：a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = b ^ a;
//	a = a ^ b;
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int n = 0;//sum=a+aa+aaa+aaa...
//	int a = 0;
//	int sum = 0;
//	int i = 0;
//	int tmp = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		tmp = a + tmp * 10;
//		sum += tmp;
//	}
//	printf("%d", sum);
//	return 0;
//}

////水仙花数打印
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i=0;i<100000;i++)
//	{
//		int count = 1;
//		int sum = 0;
//		int tmp = i;
//		while (tmp / 10)//计算数字有多少位数
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		//计算每一位的次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		//判断是否为水仙花数
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}