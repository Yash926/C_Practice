//WAP to take input from the user and traverse (display it)
#include<stdio.h>

int main()
{
//	int a[5]={1,2,3,4,5};
//	printf("%d",a[1]);
	int roll_no[10];
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&roll_no[i]);
	}
	printf("traversing array elements\n");
	for(i=0;i<10;i++)
	{
		printf("index is %d and value is %d\n",i,roll_no[i]);
		printf("%d\n",roll_no[i]);
	}
	printf("doubling array elements\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",2*roll_no[i]);
	}
}

