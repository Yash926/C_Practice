// write a program to implement grading system
//marks of python
//marks of maths
//marks of chemistry
//average
#include<stdio.h>
int main()
{
	int p,m,c,avg;
	printf("Enter Marks of python:");
	scanf("%d",&p);
	printf("Enter Marks of Maths:");
	scanf("%d",&m);
	printf("Enter Marks of Chemistry:");
	scanf("%d",&c);
	avg=p+m+c/3;
	printf("%d\n",avg);
	if(avg>90)
	{
		printf("your grade is O");
	}
	else if(avg>80)
	{
		printf("your grade is A");
	}
	else if(avg>70)
	{
		printf("your grade is B");
	}
	else if(avg>60)
	{
		printf("your grade is C");
	}
	else if(avg>70)
	{
		printf("your grade is D");
	}
	else 
	{
		printf("Reappear");
	}
	return 0;


}
