#include<stdio.h>

int main()
{
    float x,y;
    scanf("%f %f", &x, &y);
    printf("%.2f\n",x+y );
    if(x>y)
    {
    	printf("%.2f\n",x-y );
	}
	else
	{
		printf("%.2f\n",y-x );
	}
    printf("%.2f\n",x*y );
    if(x>y)
    {
    	printf("%.2f\n",x/y );
	}
	else
	{
		printf("%.2f\n",y/x );
	}
    return 0;
}

