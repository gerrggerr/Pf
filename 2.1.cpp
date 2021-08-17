#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{	
	float w, h;
	scanf("%f %f", &w, &h);
	float BMI = w / (h * h);
	if (BMI < 18.5)
	{
		printf("Underweight");
	}
	else if (BMI >= 18.5 && BMI < 24.9)
	{
		printf("Normal");
	}
	else if (BMI >= 25 && BMI < 29.9)
	{
		printf("Overweight");
	}
	else if (BMI >= 30)
	{
		printf("Obese");
	}
	
	return 0;
}
