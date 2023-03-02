//input two int values,2float values then your output will be 
#include<stdio.h>
int main()
{
	int a,b;
	float c,d;
	scanf("%d %d",&a,&b);
	scanf("%f %f",&c,&d);
	printf("%d %d\n",(a+b),(a*b));
	//printf("%f %f\n",(c+d),(c*d));
	printf("%0.2f %0.2f\n",(c+d),(c*d));
	return 0;
	
}
