#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void swap_arr(int arr[], int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		if (arr[left] % 2 != 0)//����߿�ʼ��ż��
//		{
//			left++;
//		}
//		else if (arr[right] % 2 != 1)//���ұ߿�ʼ������
//		{
//			right--;
//		}
//		else
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("ԭ����:");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	swap_arr(arr, sz);
//	return 0;
//}

//#include <assert.h>
//int my_strlen(const char * str)//const����*str ��strָ������ݲ��ܸı�
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//#include <assert.h>
//char* my_strcpy(char* arr1, const char* arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	char* p = arr1;
//	while (*arr1++ = *arr2++);
//	return p;
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "world";
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}