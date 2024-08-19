#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while(count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int num = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
			{
				num++;
			}
		}
	}
	return num;
}

void get_mine(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y, int row, int col, int* p)
{
	if (x>=1&& x <= row && y >= 1 && y <= col)
	{
		int count = get_mine_count(mine, x, y);
		if (count == 0)
		{
			(*p)++;
			int i = 0;
			int j = 0;
			show[x][y] = ' ';
			for (i = x-1; i <= x+1; i++)
			{
				for (j = y-1; j <= y+1; j++)
				{
					if (show[i][j]=='*')
						get_mine(mine, show, i, j, row, col, p);
				}
			}
		}
		else
		{
			(*p)++;
			show[x][y] = count + '0';
		}
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int* p = &win;
	while (win<row*col-EASY_COUNT)
	{
		printf("输入坐标\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				get_mine(mine, show,  x,  y,row,col,p);
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("坐标非法，重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
	}

}
