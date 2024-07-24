#include <stdio.h>
/**
 * main-entry point
 * Description: fuction that prints single integers
 * Returns: 0 if successful
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
