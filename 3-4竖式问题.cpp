#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int count = 0;
	printf("%d %d %d", count++, count++, count++);
	count = 0;
	printf("%d", (count++) + (count++));
	system("pause");
	return 0;
}
