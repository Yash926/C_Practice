//WAP to implement bubble swap
#include<stdio.h>
int main()
{
	int a[100],i,n,j,hold;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Data items in original order:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);//elements will come with space
	}//end for
	//bubble sort
	//loop to control no of passes
	for(i=0;i<n-1;i++)
	{
		//loop control number of comparisons per pass
		for(j=0;j<n-1;j++)
		{
			//compare adjacent elements and swapthem it first
			//element is greater than second element
			if(a[j]>a[j+1])
			{
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			}//end if
		}//end inner for 
	}//end outer for
	printf("\n Data items in ascending order:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}//end for
	return 0;
	
}//end main
