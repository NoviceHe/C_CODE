#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MaxSize 100
typedef int DataType;

typedef struct
{
	DataType data[MaxSize];
	int length;
}SeqList;

void InitList(SeqList * L)
{
	L->length = 0;
}

int CreatList(SeqList * L, DataType a[], int n)
{
	if (n > MaxSize)
	{
		printf("存储空间不够\n");
		return 0;
	}
	int i = 0;
	for (i = 0; i < n; i++)
	{
		L->data[i] = a[i];
	}
	L->length = n;
	return 1;
}

void printList(SeqList * L)
{
	int i = 0;
	for (i = 0; i < L->length; i++)
	{
		printf("%d ", L->data[i]);
	}
	printf("\n");
}

int Locate(SeqList * L, DataType n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (L->data[i] == n)
		{
			return i + 1;
		}
	}
		return 0;
}

int Get(SeqList * L, int i, DataType * x)
{
	if (i<1 || i>L->length)
	{
		printf("查找位置错误\n");
		return 0;
	}
	else
	{
		*x = L->data[i - 1];
		return 1;
	}
}

int Insert(SeqList* L, int i, DataType x)
{
	if (L->length >= MaxSize)
	{
		printf("上溢出错误\n");
		return 0;
	}
	if (i<1 || i>L->length)
	{
		printf("位置错误\n");
		return 0;
	}
	int j = 0;
	for (j = L->length; j >= i; j--)
	{
		L->data[j] = L->data[j - 1];
	}
	L->data[i - 1] = x;
	L->length++;
	return 1;
}

int Delete(SeqList* L, int i, DataType* ptr)
{
	if (i == 0)
	{
		printf("下溢错误\n");
		return 0;
	}
	if (i<1 || i>L->length)
	{
		printf("位置错误\n");
		return 0;
	}
	(*ptr) = L->data[i - 1];
	int j;
	for (j = i; j < L->length; j++)
	{
		L->data[j - 1] = L->data[j];
	}
	L->length--;
	return 1;
}

int main()
{
	SeqList L;
	InitList(&L);
	int a[] = { 1,2,3,4,5 };
	CreatList(&L, a, 5);
	printf("顺序表长度为：%d\n", L.length);
	printList(&L);

	int pos = Locate(&L, 5);
	printf("按位查找，查找的序号为：%d\n", pos);

	int x;
	int res = Get(&L, 2, &x);
	printf("按位查找，查找的值为:%d\n", x);

	//插入元素
	Insert(&L, 2, 10);
	printf("插入元素后列表为：");
	printList(&L);
	//删除元素
	Delete(&L, 5, &x);
	printf("删除元素为：%d\n", x);
	printf("删除元素后列表为：");
	printList(&L);

	return 0;
}