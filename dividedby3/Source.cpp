#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a;
int main()
{
	printf("Enter number : ");
	scanf("%d", &a);
	if (a % 3 == 0)
	{
		printf("It can be divided by 3.");
	}
	else
	{
		printf("It can't be divided by 3.");
	}
}