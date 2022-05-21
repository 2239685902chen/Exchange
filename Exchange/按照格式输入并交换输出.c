#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int q = 0;
	scanf("a=%d,b=%d", &a, &b);
	q = a;
	a = b;
	b = q;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}