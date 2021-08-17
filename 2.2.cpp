#include<stdio.h>

int main()
{
    float x, y;
    scanf_s("%f %f", &x, &y);
    printf("%.2f %.2f %.2f %.2f", x + y, x - y, x * y, x / y);
    return 0;
}
