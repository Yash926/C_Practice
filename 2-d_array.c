#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)  //for making rows
	{														//it  is mandatory 3636to keep rows outside 
		for(j=0;j<3;j++){			// for making columns
		scanf("%d",&a[i][j]);	
		}
	}
	printf("Traversing");
	for(i=0;i<3;i++)  //for making rows
	{														//it  is mandatory 3636to keep rows outside 
		for(j=0;j<3;j++){			// for making columns
		printf("%d",&a[i][j]);	
		}
	}
	
}
