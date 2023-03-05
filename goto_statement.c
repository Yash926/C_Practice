//WAP to demonstrate the concept of goto statement
#include<stdio.h>
int main()
{
	int n=10;
	Yash:
		printf("%d ",n);
		n=n-1;
		if(n>0)
//		if(n<0)
		goto Yash;
	return 0;
}
