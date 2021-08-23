#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	int sum = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b || a > c) {
		printf("%d\n", a);
		sum += a;
	}
	if (b > a || b > c) {
		printf("%d\n", b);
		sum += b;
	}
	if (c > a || c > b) {
		printf("%d\n", c);
		sum += c;
	}
	printf("%d", sum);
	return 0;
}
