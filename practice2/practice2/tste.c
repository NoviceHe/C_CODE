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
		printf("�洢�ռ䲻��\n");
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
		printf("����λ�ô���\n");
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
		printf("���������\n");
		return 0;
	}
	if (i<1 || i>L->length)
	{
		printf("λ�ô���\n");
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
		printf("�������\n");
		return 0;
	}
	if (i<1 || i>L->length)
	{
		printf("λ�ô���\n");
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
	printf("˳�����Ϊ��%d\n", L.length);
	printList(&L);

	int pos = Locate(&L, 5);
	printf("��λ���ң����ҵ����Ϊ��%d\n", pos);

	int x;
	int res = Get(&L, 2, &x);
	printf("��λ���ң����ҵ�ֵΪ:%d\n", x);

	//����Ԫ��
	Insert(&L, 2, 10);
	printf("����Ԫ�غ��б�Ϊ��");
	printList(&L);
	//ɾ��Ԫ��
	Delete(&L, 5, &x);
	printf("ɾ��Ԫ��Ϊ��%d\n", x);
	printf("ɾ��Ԫ�غ��б�Ϊ��");
	printList(&L);

	return 0;
}