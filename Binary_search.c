//WAP to implement binary search
#include<stdio.h>
int main()
{
	int a[100],beg,mid,end,key,n,loc=-1,i;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	beg=0;
	end=n-1;
	printf("Enter element to search:");
	scanf("%d",&key);
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(a[mid]==key)
		{
			loc=mid;
			break;
		}
		else if(a[mid]>key)
		{
			end=mid-1;
		}
		else if(a[mid]<key)
		{
			beg=mid+1;
		}
		if (loc!=-1)
		{
			printf("Element is found at %d",loc);
		}
		else
		{
			printf("Element not found");
		}
	}
	return 0;
}

