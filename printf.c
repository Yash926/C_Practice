#include<stdio.h>
int main()
{
	int a=5643;
	int b=123;
	printf("%d\n",a);
	printf("*%d\n",a);
	printf("*%d *\n",a);
	printf("*%-6d*\n",a);
	printf("*%6d*\n",a);
	printf("*%6d*\n",a);
	printf("*%06d*\n",a);
	printf("*%16d*\n",a);
	printf("*%5d*%-5d*\n",a,a);
	printf("*%06d*\n",b);
	return 0;
}
