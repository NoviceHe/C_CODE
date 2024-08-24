#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int DigitSum(int i)
//{
//	if (i > 9)
//	{
//		return i%10+DigitSum(i / 10);
//	}
//	else
//	{
//		return i;
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int sum=DigitSum(i);
//	printf("%d", sum);
//	return 0;
//}

//int  Pow(int n, int k)
//{
//	if (k >= 1)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n,&k);
//	int sum = Pow(n, k);
//	printf("%d", sum);
//	return 0;
//}
//
//long long Fac(int n)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n > 2)
//	{
//		for (i = 3; i <= n; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long long sum = Fac(n);
//	printf("%d", sum);
//	return 0;
//}

//long long Fac(int n)
//{
//	if (n < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fac(n - 2) + Fac(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long long sum = Fac(n);
//	printf("%d", sum);
//	return 0;
//}

//void BubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j+ 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,4,2,6,7,5,9,8,3,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*Init(arr, sz);*/
//	/*print(arr, sz);*/
//	reverse(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int i = 0;
//	printf("请输入10个整数：\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	printf("请输入10个整数：\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("arr1:\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("arr2:\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

int calc_diff_bit(int m, int n)
{
	int tmp = m ^ n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);//让tmp二进制中最右边的1消失
		count++;
	}
	return count;
}
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	printf("%d\n", calc_diff_bit(m, n));
	return 0;
}