////a program to create calculator using switch
//#include<stdio.h>
//int main()
//{
//	printf("press 1 for addition\n");
//	printf("press 2 for substraction\n");	
//	printf("press 3 for multiplication\n");
//	printf("press 4 for division\n");
//	int a,b,ch;
//	printf("Enter your choice:");
//	scanf("%d",&ch);
//	printf("Enter a:");
//	scanf("%d",&a);
//	printf("Enter b:");
//	scanf("%d",&b);
//	switch(ch)
//	{
//		case 1:
//			printf("%d+%d=%d",a,b,(a+b));
//			break;
//		case 2:
//			printf("%d-%d=%d",a,b,(a-b));
//			break;
//		case 3:
//			printf("%d*%d=%d",a,b,(a*b));
//			break;
//		case 4:
//			printf("%d/%d=%d",a,b,(a/b));
//			break;
//		default:
//			printf("Enter choice between 1 to 4");
//	}
//	return 0;
//	
//	
//}


//a program to create calculator using switch
#include<stdio.h>
int main()
{
	printf("press + for addition\n");
	printf("press - for substraction\n");	
	printf("press * for multiplication\n");
	printf("press / for division\n");
	int a,b;
	char ch;
	printf("Select your operator:");
	scanf("%c",&ch);
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	switch(ch)
	{
	
		case '+':
			printf("%d+%d=%d",a,b,(a+b));
			break;
		case '-':
			printf("%d-%d=%d",a,b,(a-b));
			break;
		case '*':
			printf("%d*%d=%d",a,b,(a*b));
			break;
		case '/':
			printf("%d/%d=%d",a,b,(a/b));
			break;
		default:
			printf("Enter your choice");
	}
	return 0;
	
	
}
