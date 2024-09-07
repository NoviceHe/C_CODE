#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x = 6;
	int y = 8;
	printf("原式为：6/8\n");
	int m = 0, n = 0;
	if (x > y)
	{
		m = x;
		n = y;
	}
	if (y > x)
	{
		m = y;
		n = x;
	}
	int tmp = m % n;
	while (tmp!=0)
	{
		m = n;
		n = tmp;
		tmp = m % n;
	}
	printf("化简为：%d/%d\n", x/n, y/n);
	return 0;
}