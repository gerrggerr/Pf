#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if ((a + b) > (a + c) && (a + b) > (b + c)) {
		printf("%d + %d = %d", a, b, a + b);
	}
	else if ((b + c) > (a + b) && (b + c) > (a + c)) {
		printf("%d + %d = %d", b, c, b + c);
	}
	else if ((a + c) > (a + b) && (a + c) > (b + c)) {
		printf("%d + %d = %d", a, c, a + c);
	}
	return 0;
}