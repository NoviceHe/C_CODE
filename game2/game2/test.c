#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void game()
{
	//�洢��Ϣ
	//���ú�����
	char mine[ROWS][COLS] = { 0 };
	//���úõ���������Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//��������
	SetMine(mine, ROW, COL);
	//ɨ��
	DisplayBoard(mine, ROW, COL);
	FindMine(mine,show, ROW, COL);
}
void menu()
{
	printf("***************\n");
	printf("*1.play 0.exit*\n");
	printf("***************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}