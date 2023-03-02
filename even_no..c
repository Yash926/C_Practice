//WAP to print list of Even NUmbers from n numbers.
#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter NUmber:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			continue;
		}
	count=count+1;
	printf("%d ",i);
	
	}
	printf("\nCount=%d",count);
	return 0;

	}
